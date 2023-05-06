#include "main.h"
#include <unistd.h>

/**
 * _putchar - A function prints character c to stdout.
 * @c: Is the character to be printed
 *
 * Return: Success 1, or -1 if unsuccessful, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
