#include "main.h"
#include <stdio.h>

/**
 * print_binary -  function prints the binary representation of a number.
 * @n: the number to print in the representation.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = 1UL << (sizeof(n) * 8 - 1);
	int i = 0;

	while (num != 0)
	{
		if (num & n)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
		num >>= 1;
	}
	if (!i)
		_putchar('0');
}
