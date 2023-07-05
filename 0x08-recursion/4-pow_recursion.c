#include "main.h"
/**
 * _pow_recursion - a func that returns the value of x raised to the pow of y.
 * @x: the integer value.
 * @y: the power number.
 *
 * Return: x rasied to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else
return (_pow_recursion(x, y - 1) * x);
}
