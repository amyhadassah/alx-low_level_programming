#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void print_error(const char *msg);
void print_elf_header(Elf32_Ehdr *header);
void print_elf64_header(Elf64_Ehdr *header);
void read_and_display_header32(int fd);
void read_and_display_header64(int fd);

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints information from a 32-bit ELF header.
 * @header: A pointer to the 32-bit ELF header.
 */
void print_elf_header(Elf32_Ehdr *header)
{
	(void)header;
	/**
	 * Use the header parameter to avoid warnings
	 * TODO:Implementation of printing the 32-bit ELF header
	 *
	 */
}

/**
 * print_elf64_header - Prints information from a 64-bit ELF header.
 * @header: A pointer to the 64-bit ELF header.
 */
void print_elf64_header(Elf64_Ehdr *header)
{
	(void)header;
	/**
	 * Use the header parameter to avoid warnings
	 * TODO:Implementation of printing the 64-bit ELF header
	 *
	 */
}

/**
 * read_and_display_header32 - Reads and displays a 32-bit ELF header.
 * @fd: File descriptor of the ELF file.
 */
void read_and_display_header32(int fd)
{
	Elf32_Ehdr header32;

	if (read(fd, &header32, sizeof(header32)) != sizeof(header32))

	{
		close(fd);
		print_error("Failed to read the ELF header");
	}
	print_elf_header(&header32);
}

/**
 * read_and_display_header64 - Reads and displays a 64-bit ELF header.
 * @fd: File descriptor of the ELF file.
 */
void read_and_display_header64(int fd)
{
	Elf64_Ehdr header64;

	if (read(fd, &header64, sizeof(header64)) != sizeof(header64))

	{
		close(fd);
		print_error("Failed to read the ELF header");
	}
	print_elf64_header(&header64);
}

/**
 * main - Main function that opens an ELF file and displays its header info.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
	int fd;
	unsigned char e_ident[EI_NIDENT];

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open the file");
	}

	if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
	{
		close(fd);
		print_error("Failed to read the ELF identifier");
	}

	if (strncmp((char *)e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		print_error("This is not an ELF file");
	}

	if (lseek(fd, 0, SEEK_SET) != 0)
	{
		close(fd);
		print_error("lseek failed");
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		read_and_display_header32(fd);
	}
	else
	{
		read_and_display_header64(fd);
	}

	close(fd);
	return (0);
}

