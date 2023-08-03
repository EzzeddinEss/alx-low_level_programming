#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);
num = 2 * num +( b[i] - '0');
i++;
}
return (num);
}
