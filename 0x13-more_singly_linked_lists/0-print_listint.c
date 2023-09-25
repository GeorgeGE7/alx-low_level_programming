#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
