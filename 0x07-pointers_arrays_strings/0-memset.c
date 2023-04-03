#include "main.h"

/**
 *_memset - fil a block of memory with a specific value
 * @s:starting addres of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i;

	for (; n >  0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
