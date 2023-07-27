#include "lists.h"

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
unsigned int len = 0;
while (str[len])
{
len++;
}
newNode = malloc(sizeof(list_t));

if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = len;
newNode->next = *head;
*head = newNode;

return (newNode);
}
