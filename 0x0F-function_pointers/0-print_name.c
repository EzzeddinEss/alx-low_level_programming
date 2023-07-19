#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: the name of the person.
 * @f: is a function pointer.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}