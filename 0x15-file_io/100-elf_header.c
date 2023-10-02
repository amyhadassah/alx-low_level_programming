#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @msg: The error message to print.
 */
void print_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * display_elf_header - Displays information from an ELF header.
 * @header: A pointer to the ELF header.
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	/* Magic: */
	printf("Magic:\t");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	/* Other properties: */
	printf("Class:\t\t\t\t%s\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:\t\t\t\t%s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version:\t\t\t%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:\t\t\t\tUNIX - System V\n");
	printf("ABI Version:\t\t\t%d\n", header->e_ident[EI_OSABI]);
	printf("Type:\t\t\t\t%s\n",
			header->e_type == ET_EXEC ? "EXEC (Executable file)" : "UNKNOWN");
	printf("Entry point address:\t\t0x%lx\n", header->e_entry);
}

/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Failed to open the file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read the ELF header");

	if (strncmp((char *)header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("This is not an ELF file");

	display_elf_header(&header);

	close(fd);
	return (0);
}

