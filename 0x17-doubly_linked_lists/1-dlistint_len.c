#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of elements in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		idx++;
		h = h->next;
	}

	return (idx);
}
