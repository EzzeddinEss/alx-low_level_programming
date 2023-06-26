#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that write char skip one and write other.
 * @str: the string.
 *
 * Return: void.
 */

void puts2(char *str)
{
int ch;
for (ch = 0; str[ch] != '\0'; ch++)
{
if (ch % 2 == 0)
_putchar(str[ch]);
}
_putchar('\n');
}
