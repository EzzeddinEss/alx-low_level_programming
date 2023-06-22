#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times _ will be printed.
 *
 * Return: void.
 */

void print_line(int n)
{
int line;
for (line = 1; line <= n; line++)
{
if (n < 0)
_putchar('\n');
else
_putchar('_');
}
_putchar('\n');
}