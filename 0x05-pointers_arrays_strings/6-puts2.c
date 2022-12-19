#include "main.h"
/**
* puts2 - function that prints every other character of a string
* @n: the parametr
* Return: 0
*/

void puts2(char *n)
{
	int x = 0;

	while (x >= 0)
	{
		if (n[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (x % 2 == 0)
		{
			_putchar(n[x]);
			x++;
		}
	}
}
