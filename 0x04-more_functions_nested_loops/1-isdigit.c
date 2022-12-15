#include "main.h"

/**
 * _isdigit -  check if the numbers in range of 0 to 9 are digits
 * @c: the checking prameter
 * Return: 1 if the parameter is digites otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
