#include "main.h"

/**
 * _islower - function to print lower case
 *
 * @c: parameter to be printed
 *
 * Returns: 1 if it a lower case
 * and 0 othewise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
