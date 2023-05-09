#include "main.h"

/**
 * get_endianness - check machine if it  is little or big endian
 * Return: 0 if for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
