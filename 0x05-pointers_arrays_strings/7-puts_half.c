# include "main.h"
# include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: the string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
int length;
int split;

for (split = 0; str[split] != '\0'; split++)
split++;
length = split / 2;
if (split % 2 == 1)
length = ((split + 1) / 2);
for (split = length; str[split] != '\0'; split++)
_putchar(str[split]);
_putchar('\n');
}
