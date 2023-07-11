#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - afunc that returns a pointer to a newly allocated space in memory.
 * @str: the string to be optain.
 *
 * Return: Null if str is null, null if insufficient memory.
 */

char *_strdup(char *str)
{
char *chr;
int x;
int size = 0;
if (str == 0)
return (0);
while (str[size] != '\0')
size++;
chr = malloc(sizeof(char) * (size + 1));
if (chr == 0)
return (0);
else
for (x = 0; x < size; x++)
chr[x] = str[x];
return (chr);
}
