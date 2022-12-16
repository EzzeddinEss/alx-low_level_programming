#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal..
 * @n: the checking parameter
 * Return: print slash
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		int j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
