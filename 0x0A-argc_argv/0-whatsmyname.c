#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the program name.
 * @argc: the number or args.
 * @argv: array of strings.
 * Return: 0.
 */

int main (int argc, char* argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}
