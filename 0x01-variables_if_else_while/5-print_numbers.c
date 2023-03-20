#include <stdio.h>
/**
 * main - program that prints number from 0 to 9, followed by new line.
 *
 *Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
