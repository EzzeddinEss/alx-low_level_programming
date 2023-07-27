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
size_t stl = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s \n", 0, "(nil)");
}
else if
{
printf("[%d] %s \n", h->len, h->str);
}
stl++;
h = h->next;
}
return (stl);
}
