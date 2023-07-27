#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that print numbers.
 * @separator: is the string to be printed between numbers.
 * @n: is the amount of numbers to be printed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, num;
va_list countnum;
va_start(countnum, n);
for (i = 0; i < n; i++)
{
num = va_arg(countnum, int);
printf("%d", num);
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(countnum);
}