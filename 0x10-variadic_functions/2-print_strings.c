#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings.
 * @separator: a string to be printed between strings.
 * @n: the number of strings to be printed.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list countstr;
va_start(countstr, n);
for (i = 0; i < n; i++)
{
str = va_arg(countstr, char *);
if (str == NULL)
{
printf("nil");
}
else
{
printf("%s", str);
}
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(countstr);
}
