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
list_t *newNode;
list_t *temp = *head;
int count;
for (count = 0; str[count];)
count++;
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
if (str != NULL)
{
newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}
newNode->len = count;
}
if (temp != NULL)
{
while (temp->next)
{
temp = temp->next;
}
temp->next = newNode;
}
else
*head = newNode;

return (newNode);

}
