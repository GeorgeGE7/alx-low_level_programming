#include "main.h"
#include <stdio.h>

/**
 * flip_bits - bits to convert one number to another one
 * @n: start number
 * @m: next number
 * Return: number of bits that were needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change;
	int count;

	change = n ^ m;
	count = 0;

	while (change)
	{
		count++;
		change &= (change - 1);
	}

	return (count);
}

