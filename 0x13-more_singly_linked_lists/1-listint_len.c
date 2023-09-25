#include "lists.h"

/**
 * listint_len - returns the length
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
