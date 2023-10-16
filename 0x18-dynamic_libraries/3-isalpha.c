#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the checking parameter
 *
 * Return: is lower or uppercase (1) or else (0).
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
return (0);
}
