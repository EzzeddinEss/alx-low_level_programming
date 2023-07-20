#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its param.
 * @n: the numbers to be calculated.
 *
 * Return: the sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, value = 0;
va_list numsum;
va_start(numsum, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
value = value + va_arg(numsum, int);
}
va_end(numsum);
return (value);
}
