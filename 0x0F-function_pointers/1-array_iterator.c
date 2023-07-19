#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that prints an array based on func pram.
 * @array: an array.
 * @size: is the size of an array
 * @action: a pointer to the function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
