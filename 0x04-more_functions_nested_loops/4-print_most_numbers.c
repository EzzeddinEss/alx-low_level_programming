#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - func that prints all nums from 0 to 9 without 2 & 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
_putchar(num);
}
_putchar('\n');
}
