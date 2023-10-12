#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a D-linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to return.
 *
 * Return: node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node);
}
