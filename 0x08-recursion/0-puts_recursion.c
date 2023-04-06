#include "main.h"
/**
 * _putchar_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _putchar_recursion(char *s)
{

	if (*s)
	{
	-putchar(*s);

	_puts_recursion(s + 1);
	}

	else
	_putchar('\n');

}
