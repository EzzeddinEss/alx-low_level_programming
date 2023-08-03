#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a pointer to a bit.
 * @index: an index of a bit to be clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
if ((1L << index) & *n)
*n = (*n & ~(1L << index));
return (1);
}
