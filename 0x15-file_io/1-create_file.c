#include "main.h"

/**
 * _strlen - gets length of a string
 * @str: string to get length of.
 * Return: length of string
 */
int _strlen(char *str)
{
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
		;

	return (leng);
}

/**
 * create_file - create file with rw------- permisions and writes in it
 * if file already exists, don't change permissions and just append to it
 * @filename: name of new file
 * @text_content: content to write into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fldesc;
	int n_wrote;

	if (!filename)
		return (-1);

	fldesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fldesc == -1)
		return (-1);

	if (!text_content)
	{
		close(fldesc);
		return (1);
	}

	/* write to file */
	n_wrote = write(fldesc, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fldesc);
		return (-1);
	}

	close(fldesc);
	return (1);
}
