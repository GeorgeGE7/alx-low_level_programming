#include "main.h"
#include <stdio.h>
/**
 * get_bit - bring the value of a bit at an index
 * @n: number to gen
 * @index: index begins from 0
 * Return: Value of bit at index, or an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int stay;

	if (index > 64)
		return (-1);

	stay = n >> index;

	return (stay & 1);
}
