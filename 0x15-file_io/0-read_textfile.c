#include "main.h"

/**
 * read_textfile - read lines of text and prints to std output
 * @filename: Text file to read from
 * @letters: size or number of lines to read
 * Return: size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fldesc;
	ssize_t n_scan, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open in read-only */
	fldesc = open(filename, O_RDONLY);
	if (fldesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_scan = read(fldesc, buffer, letters);
	if (n_scan == -1)
	{
		free(buffer);
		close(fldesc);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_scan);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fldesc);
		return (0);
	}

	close(fldesc);
	return (n_scan);

}
