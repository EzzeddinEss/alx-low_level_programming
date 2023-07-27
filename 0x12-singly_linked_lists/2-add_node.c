#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning og the list.
 * @head: a pointer to the node.
 * @str: a pointer to the string to be added.
 *
 * Return: the address of the new element and null if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
int count;
for (count = 0; str[count];)
count++;
newNode = malloc(sizeof(list_t));
if (str != NULL)
{
newNode->str = strdup(str);
newNode->len = count;
}
else if (newNode == NULL)
return (0);


newNode->next = *head;
*head = newNode;

return (newNode);
}
