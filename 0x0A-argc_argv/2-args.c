#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that print all arguments recevied.
 * @argc : the number of argument.
 * @argv : an array of arguments.
 *
 * Return: Alwayes 0.
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
