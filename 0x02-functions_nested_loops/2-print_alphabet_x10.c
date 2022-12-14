#include "main.h"

/**
 * print_alphabet_x10 - nested loop to print alphabet 10 times
 *
 * Return"0
*/

void print_alphabet_x10(void)
{
	int X;
	char Y = 'a';

	while (X <= 10)
	{
		while (Y <= 'z')
		{
			_putchar(Y);
			Y++;
		}
		X++;
	}
	_putchar('\n');
}
