#include "main.h"

/**
 * flip_bits - count number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = exclusive >> b;
		if (current & 1)
			count++;
	}

	return (count);
}
