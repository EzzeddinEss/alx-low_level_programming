#include "lists.h"

/**
 * print_dlistint - function that prints all the elements D-linked list.
 * @h: node address.
 *
 * Return: a D-linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		idx++;
	}
	return (idx);
}
