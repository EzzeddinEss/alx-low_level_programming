#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that print reverse string.
 * @s: The string var.
 *
 * Return: void.
 */

void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
for (x = x - 1; s[x] != '\0'; x--)
_putchar(s[x]);
_putchar('\n');
}