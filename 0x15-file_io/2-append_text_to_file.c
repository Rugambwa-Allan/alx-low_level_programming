#include "main.h"

/**
 * append_text_to_file - Append text at end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the filename is NULL - -1.
 *         If the file does not exist  - -1.
 *         or Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, x, anb = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (anb = 0; text_content[anb];)
			anb++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	x = write(k, text_content, anb);

	if (k == -1 || x == -1)
		return (-1);

	close(k);

	return (1);
}
