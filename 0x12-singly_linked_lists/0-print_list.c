#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of given list.
 * @h: a pointer to a list_t.
 *
 * Return: the number of the nodes.
 */

size_t print_list(const list_t *h)
{
int stl;
for (stl = 0; h != NULL; stl++)
{
if (h->str == NULL)
{
printf("[%d] %s \n", 0, "(nil)");
}
else
{
printf("[%d] %s \n", h->len, h->str);
}
h = h->next;
}
return (stl);
}
