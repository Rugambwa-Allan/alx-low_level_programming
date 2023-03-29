#include "main.h"

/**
 * *_strncpy - See description
 * @dest: char type string
 * @src: char type string
 * @n: number of strings
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */


char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
