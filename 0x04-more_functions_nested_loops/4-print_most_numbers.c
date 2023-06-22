#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - func that prints all nums from 0 to 9 without 2 & 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
int num = 0;
while (num <= '9')
{
if (num != '2' && num != '4')
_putchar(num);
num++;
}
_putchar('\n');
}
