#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it is done, and -1 if an error happened
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int stay;

	if (index > 64)
		return (-1);
	stay = index;
	for (j = 1; stay > 0; j *= 2, stay--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
