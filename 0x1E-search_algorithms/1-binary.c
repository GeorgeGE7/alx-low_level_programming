#include "search_algos.h"

/**
 * recursive_search - finding
 *
 * @array: array
 * @size: size of an array
 * @value: givin
 * Return: int
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t bin_s = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (bin_s && size % 2 == 0)
		bin_s--;

	if (value == array[bin_s])
		return ((int)bin_s);

	if (value < array[bin_s])
		return (recursive_search(array, bin_s, value));

	bin_s++;

	return (recursive_search(array + bin_s, size - bin_s, value) + bin_s);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: numbers
 * @value: givin value fromalx in
 * Return: I_numberber
 */
int binary_search(int *array, size_t size, int value)
{
	int I_numberber;

	I_numberber = recursive_search(array, size, value);

	if (I_numberber >= 0 && array[I_numberber] != value)
		return (-1);

	return (I_numberber);
}
