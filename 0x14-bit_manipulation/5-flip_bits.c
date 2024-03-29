#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to be changed to get
 * -from one number to the other
 *  @n: Points to the first number
 *  @m: Points to the second number
 *  Returns: Will return a number of a bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
