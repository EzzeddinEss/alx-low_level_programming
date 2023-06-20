#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: is the checking parameter
 *
 * Return: for lowercase (1) and (0) for else.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
