#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@x: the nubmer which to be checked.
 *
 * Return: the absolute value of an integer
 */

int _abs(int x)
{
if (x < 0)
{
int y;
y = x * -1;
return (y);
}
return (x);
}