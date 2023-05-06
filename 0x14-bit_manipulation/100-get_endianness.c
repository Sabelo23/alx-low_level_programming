#include "main.h"

/**
 * get_endianness - A function that checks the endianness of a machine.
 * Returns: Will return 0 if endian is big, 1 endian is small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
