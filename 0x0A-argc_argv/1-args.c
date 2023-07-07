#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints passed arguments
 * @argc: the number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
