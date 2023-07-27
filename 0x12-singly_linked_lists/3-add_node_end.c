#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of the list
 * @head: a pointer to the first node
 * @str: a pointer to a string.
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
int count = 0;
list_t *newNode, *tempo;

for (;str[count];count++);
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);
newNode->len = count;
newNode->next = NULL;
if (str== NULL)
{
free(newNode);
return (NULL);
}
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
else
{
tempo = *head;
while (tempo->next != NULL)
tempo = tempo->next;
tempo->next = newNode;
return (newNode);
}
}
