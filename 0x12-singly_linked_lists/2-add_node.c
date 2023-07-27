#include "lists.h"

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
 * add_node - adds a new node at the beginning og the list.
 * @head: a pointer to the node.
 * @str: a pointer to the string to be added.
 *
 * Return: the address of the new element and null if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
newNode = malloc(sizeof(list_t));

if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
newNode->len = _strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);
}
