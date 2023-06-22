#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times \ will be printed.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
return;
}
