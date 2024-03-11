#include "search_algos.h"

/**
 * rec_search - recursion search
 *
 * @array: given array
 * @size: array size
 * @value: givin value fromalx for
 * Return: I_number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (rec_search(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (rec_search(array, mid + 1, value));

	mid++;
	return (rec_search(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - calls to rec_search to return I_number
 *
 * @array: input array
 * @size: numbers
 * @value: givin value fromalx in
 * Return: I_number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int I_number;

	I_number = rec_search(array, size, value);

	if (I_number >= 0 && array[I_number] != value)
		return (-1);

	return (I_number);
}
