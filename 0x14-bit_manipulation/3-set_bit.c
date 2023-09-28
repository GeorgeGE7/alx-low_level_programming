#include "main.h"

/**
 * set_bit - sets the value to 1
 * @n: decimal number got by the pointer
 * @index: position to be changed, from 0
 * Return: 1 if it is done, and -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pg;

	if (index > 64)
		return (-1);

	for (pg = 1; index > 0; index--, pg *= 2)
		;
	*n += pg;

	return (1);
}
