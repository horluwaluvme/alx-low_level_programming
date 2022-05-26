#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int firstn;
	unsigned long int new_number = n ^ m;

	for (i = 50; i >= 0; i--)
	{
		firstn = new_number >> i;
		if (firstn & 1)
			count++;
	}

	return (count);
}
