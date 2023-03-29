#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
