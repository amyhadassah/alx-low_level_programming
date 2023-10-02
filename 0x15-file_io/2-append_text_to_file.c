#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 if the file exists and the operation succeeded, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_res;
	size_t length;

	/* Check if filename is NULL */
	if (!filename)
		return (-1);

	/* Open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);

	/* Check if the file exists */
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, nothing to append */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* Calculate length of text_content */
	for (length = 0; text_content[length]; length++)
		;

	/* Append the text */
	write_res = write(fd, text_content, length);

	/* Close the file */
	close(fd);

	/* Check if write was successful */
	if (write_res == -1)
		return (-1);

	return (1);
}
