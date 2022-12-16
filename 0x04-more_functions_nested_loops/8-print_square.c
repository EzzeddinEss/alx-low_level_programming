#include "main.h"

/**
 * print_square -  function that prints a square.
 * @n: the checking parameter
 * Return: print slash
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('#');
		}
	}
	_putchar('\n');
}
