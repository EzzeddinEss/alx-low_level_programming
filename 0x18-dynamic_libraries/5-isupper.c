#include "main.h"

/**
 * _isupper - a function that checks for uppercase and return the value.
 *@c: the checking parameter.
 *
 *Return: is uppercase 1 and 0 otherwise.
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
