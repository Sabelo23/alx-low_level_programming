#include <stdio.h>

/**
 * main -  program that prints numbers from 1 to 9 using putchar, and new line.
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
