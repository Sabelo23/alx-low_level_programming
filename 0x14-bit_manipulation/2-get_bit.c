#include "main.h"

/**
 * get_bit - A function that returns a value of bit in index at a decimal num
 * @n: Is the number to look for
 * @index: Is the index of a bit
 * Returns: The value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
