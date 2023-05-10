#include "main.h"

/**
 * create_file - Creates file.
 * @filename:  pointer name of file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         or Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ab, z, anb = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (anb = 0; text_content[anb];)
			anb++;
	}

	ab = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(ab, text_content, anb);

	if (anb == -1 || z == -1)
		return (-1);

	close(ab);

	return (1);
}
