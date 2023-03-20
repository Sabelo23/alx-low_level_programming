#include <stdio.h>
/**
 * main - program that prints numbers of base 16 in lowercase, then new line.
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char g;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (g = 'a' ; g <= 'f' ; g++)
		putchar(g);
	putchar('\n');
	return (0);
}
