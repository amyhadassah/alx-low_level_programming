#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1024

void handle_errors(int error_code, char *file_name, int fd);

int open_file(char *filename, int flags, mode_t mode);
void close_file(int fd);

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: 0 on success, or a specific error code on failure.
 */
int main(int argc, char *argv[])
{
	int file_in, file_out;
	ssize_t read_stat, write_stat;
	char buffer[MAXSIZE];

	if (argc != 3)
		handle_errors(97, NULL, 0);

	file_in = open_file(argv[1], O_RDONLY, 0);
	file_out = open_file(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	while ((read_stat = read(file_in, buffer, MAXSIZE)) > 0)
	{
		write_stat = write(file_out, buffer, read_stat);
		if (write_stat != read_stat)
			handle_errors(99, argv[2], 0);
	}

	if (read_stat < 0)
		handle_errors(98, argv[1], 0);

	close_file(file_in);
	close_file(file_out);

	return (0);
}

/**
 * handle_errors - Prints error messages based on the error code and exits.
 * @error_code: The error code.
 * @file_name: The name of the file causing the error.
 * @fd: The file descriptor causing the error.
 */
void handle_errors(int error_code, char *file_name, int fd)
{
	switch (error_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			return;
	}
	exit(error_code);
}

/**
 * open_file - Opens a file and handles errors.
 * @filename: Name of the file.
 * @flags: Flags for opening the file.
 * @mode: Mode for the file if it needs to be created.
 * Return: File descriptor.
 */
int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd < 0)
	{
		if (flags & O_RDONLY)
			handle_errors(98, filename, 0);
		else
			handle_errors(99, filename, 0);
	}
	return (fd);
}

/**
 * close_file - Closes a file and handles errors.
 * @fd: File descriptor.
 */
void close_file(int fd)
{
	if (close(fd) < 0)
		handle_errors(100, NULL, fd);
}
