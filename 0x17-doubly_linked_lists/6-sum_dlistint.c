#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
