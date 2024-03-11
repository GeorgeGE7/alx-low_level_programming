#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searching
 *
 * @list: input list
 * @size: numbers
 * @value: givin value fromalx in
 * Return: I_number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t I_number, k, m;
	listint_t *back;

	if (!list || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	I_number = 0;
	k = 0;

	do {
		back = list;
		k++;
		I_number = k * m;

		while (list->next && list->I_number < I_number)
			list = list->next;

		if (list->next == NULL && I_number != list->I_number)
			I_number = list->I_number;

		printf("Value checked at index [%d] = [%d]\n", (int)I_number, list->n);

	} while (I_number < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)back->I_number, (int)list->I_number);

	for (; back && back->I_number <= list->I_number; back = back->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)back->I_number, back->n);
		if (back->n == value)
			return (back);
	}

	return (NULL);
}
