#include "search_algos.h"

/**
 * linear_search - finding value
 *
 * @array: given
 * @size: size
 * @value: given
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	int i_num;
	if (!array)
		return (-1);

	for (i_num = 0; i_num < (int)size; i_num++)
	{
		printf("Value checked array[%u] = [%d]\n", i_num, array[i_num]);
		if (value == array[i_num])
			return (i_num);
	}
	return (-1);
}
