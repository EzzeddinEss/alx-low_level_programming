#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: the number of bytes to be allcoated in memory.
 *
 * Return: NULL if failed, pointer to new alloc space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0, j = 0, c1 = 0, c2 = 0;
while (s1[c1] != '\0')
c1++;
while (s2[c2] != '\0')
c2++;
if (n < c2)
{
ptr = malloc(sizeof(char) * (c1 + n + 1));
}
else
{
ptr = malloc(sizeof(char) * (c1 + c2 + 1));
}
if (ptr == NULL)
{
return (NULL);
}
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
while (j < n)
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';
return (ptr);
}