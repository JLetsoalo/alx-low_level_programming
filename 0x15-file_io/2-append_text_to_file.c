#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
		;

	return (leng);
}

/**
 * append_text_to_file - appends contents only if file exists
 * @filename: file to append to
 * @text_content: content to append into file
 * Return: 1 on success, -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fldesc;
	int n_wrote;

	if (!filename)
		return (-1);

	fldesc = open(filename, O_WRONLY | O_APPEND);
	if (fldesc == -1)
		return (-1);

	if (!text_content)
	{
		close(fldesc);
		return (1);
	}

	/* write content to file */
	n_wrote = write(fldesc, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fldesc);
		return (-1);
	}

	close(fldesc);
	return (1);
}
