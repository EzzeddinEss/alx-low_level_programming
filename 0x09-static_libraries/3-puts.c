#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that print string.
 * @str: the string.
 *
 * Return: void
 */


void _puts(char *str)
{
int x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}