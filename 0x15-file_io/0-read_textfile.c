#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to read
 * Return: x- actual number of bytes read and printed
 *           or 0 when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ab;
	ssize_t x;
	ssize_t r;

	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(ab, buf, letters);
	x = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(ab);
	return (x);
}
