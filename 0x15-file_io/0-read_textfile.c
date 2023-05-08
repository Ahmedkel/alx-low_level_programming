#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout.
 *
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters read and printed, or 0 if an error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	char *buf;
	size_t i;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	bytes_read = fread(buf, sizeof(char), letters, file);
	buf[bytes_read] = '\0';

	for (i = 0; i < (size_t)bytes_read; i++)
		putchar(buf[i]);

	free(buf);
	fclose(file);

	return (bytes_read);
}
