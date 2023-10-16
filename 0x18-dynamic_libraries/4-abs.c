#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@n: the nubmer which to be checked.
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
if (n < 0)
{
int y;
y = n * -1;
return (y);
}
return (n);
}
