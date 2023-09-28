#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number unsigned int
 * @b: string
 * Return: converted decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int all, po;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (po = 1, all = 0, len--; len >= 0; len--, po *= 2)
	{
		if (b[len] == '1')
			all += po;
	}

	return (all);
}
