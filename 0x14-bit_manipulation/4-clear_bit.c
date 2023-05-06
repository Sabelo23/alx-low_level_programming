#include "main.h"

/**
 * clear_bit - A function that set a value of a given bit to 0
 * @n: Is the pointer to the number to be changed
 * @index: is the index of a bit to clear
 * Return:1 if successful or -1 of unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
