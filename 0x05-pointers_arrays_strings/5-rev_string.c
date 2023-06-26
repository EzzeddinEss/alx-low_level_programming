#include "main.h"
#include <stdio.h>

/**
 * rev_string - a funtion that print reverse string.
 * @s: the string.
 *
 * Return: void.
 */

void rev_string(char *s)
{
int x = 0;
int y;
char ch = s[0];

while (s[x] != '\0')
x++;
for (y = 0; y < x; y++)
{
x--;
ch = s[y];
s[y] = s[x];
s[x] = ch;
}
}
