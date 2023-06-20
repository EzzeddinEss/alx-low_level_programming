#include "main.h"
/**
 * print_alphabet_x10 - a func that prints 10 times the alphabet in lowercase.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
int i = 0;
char alphabet;
while (i < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
}
_putchar('\n');
i++;
return;
}
