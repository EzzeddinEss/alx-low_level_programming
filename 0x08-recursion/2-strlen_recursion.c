#include "main.h"

/**
 * _strlen_recursion - a function that print the length of string.
 * @s: the input string to be measured.
 *
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s == 0)
{
return (i);
}
else
{
i++;
i = i + _strlen_recursion(s + 1);
return (i);
}
}