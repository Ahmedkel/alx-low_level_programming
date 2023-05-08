#include "main.h"

/**
 * create_file - creates a file with the
 * given name and writes text_content to it
 * @filename: the name of the file to create
 * @text_content: a null-terminated
 * string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created or written)
 * The created file has permissions rw-------.
 * If it already exists, truncates it.
 *
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
