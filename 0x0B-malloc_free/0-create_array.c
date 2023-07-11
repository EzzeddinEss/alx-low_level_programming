#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 * @c: the char to be initialized.
 * @size: size of array.
 * Return: null if size is zero, or a pointer.
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int x = 0;
str = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (str == NULL)
return (NULL);
while (x < size)
{
str[x] = c;
x++;
}
return (str);
}
