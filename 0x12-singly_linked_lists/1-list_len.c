#include "lists.h"

/**
 * list_len - return the number of elements in the list.
 * @h: is a poniter to the list.
 *
 * Return: the number of the elements.
 */
size_t list_len(const list_t *h)
{
int len = 0;

while (h != NULL)
{
h = h->next;
len++;
}
return (len);
}
