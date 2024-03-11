#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *
 * @array: given array
 * @size: numbers
 * @value: givin value fromalx with
 * Return: I_number
 */
int jump_search(int *array, size_t size, int value)
{
	int I_number, m, k, go_back;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	go_back = I_number = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", I_number, array[I_number]);

		if (array[I_number] == value)
			return (I_number);
		k++;
		go_back = I_number;
		I_number = k * m;
	} while (I_number < (int)size && array[I_number] < value);

	printf("Value found between indexes [%d] and [%d]\n", go_back, I_number);

	for (; go_back <= I_number && go_back < (int)size; go_back++)
	{
		printf("Value checked array[%d] = [%d]\n", go_back, array[go_back]);
		if (array[go_back] == value)
			return (go_back);
	}

	return (-1);
}
