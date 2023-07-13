#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum value of the array.
 * @max: the maximum value of the array.
 *
 * Return: the pointer, if min is greater > null, and if the malloc fails.
 */

int *array_range(int min, int max)
{
int i, arr;
int *ptr;
if (min > max)
{
return (NULL);
}
arr = max - min + 1;
ptr = malloc(sizeof(int) * arr);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
