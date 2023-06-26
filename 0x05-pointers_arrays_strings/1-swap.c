#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the var of the 1st integer.
 * @b: the var of the 2nd integer.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
