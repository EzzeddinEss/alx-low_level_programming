#include "lists.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of given list.
 * @h: a pointer to a list_t.
 *
 * Return: the number of the nodes.
 */

size_t print_list(const list_t *h)
{
int stl;
for (stl = 0; h != 0; stl++)
{
if (h->str != NULL)
printf("[%d] %s\n", _strlen(h->str), h->str);
else
printf("[0] (nil)\n");

h = h->next;
}
return (stl);
}
