#include "main.h"

/******* SWITCH CASE FOR POSSIBLE ERRORS ********/
/**
 * __exit - prints error messages on exit.
 * @error: exit value or file descriptor
 * @s: str is a name of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/

int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies contents of one file to another
 * @argc: ./a.out copyfromfile copytofile
 * @argv: first is file to copy from (fl_1), second is file to copy to (fl_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int fl_1, fl_2, n_scan, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fl_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fl_2 == -1)
		__exit(99, argv[2], 0);

	fl_1 = open(argv[1], O_RDONLY);
	if (fl_1 == -1)
		__exit(98, argv[1], 0);

	while ((n_scan = read(fl_1, buffer, 1024)) != 0)
	{
		if (n_scan == -1)
			__exit(98, argv[1], 0);

		n_wrote = write(fl_2, buffer, n_scan);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fl_2) == -1 ? (__exit(100, NULL, fl_2)) : close(fl_2);
	close(fl_1) == -1 ? (__exit(100, NULL, fl_1)) : close(fl_1);
	return (0);
}
