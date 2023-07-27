#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of given list.
 * @h: a pointer to a list_t.\
 *
 * Return: the number of the nodes.
 */

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s \n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}
