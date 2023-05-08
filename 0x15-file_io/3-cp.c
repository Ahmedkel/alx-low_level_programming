#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUF_SIZE 1024

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of argument strings
 *
 * Return: 0 on success, non-zero on failure
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_len, write_len;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_len = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		write_len = write(to_fd, buf, read_len);
		if (write_len != read_len || write_len == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_len == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);

	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}
