#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number to be found.
 * @index: the index of a bit.
 *
 * Return: the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int val;
if (index >= sizeof(n) * 8)
return (-1);
val = (n >> index & 1);
return (val);
}
