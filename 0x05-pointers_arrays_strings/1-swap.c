#include "main.h"
/**
 * Swap_in - swaps the values of two integers
 * @a: integer tpo swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
