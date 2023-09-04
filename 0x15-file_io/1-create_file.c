#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_res;
	size_t length;

	/* Check for NULL filename */
	if (!filename)
		return (-1);

	/* Open or create file with rw------- permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/* Check if file was created successfully */
	if (fd == -1)
		return (-1);

	/* Write text_content to file if not NULL */
	if (text_content)
	{
		/* Calculate the length of text_content */
		for (length = 0; text_content[length]; length++)
			;

		/* Write the content */
		write_res = write(fd, text_content, length);

		/* Check if write was successful */
		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close file descriptor */
	close(fd);

	return (1);
}

