#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a funtion that search for int in array of numbers.
 * @array: is the array to find the int from.
 * @size: the size of the array.
 * @cmp: the function pointer.
 *
 * Return: the first inder of the first element.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if ((array != NULL && cmp != NULL) && size <= 0)
return (-1);
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
