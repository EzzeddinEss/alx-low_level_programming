#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Alwayz zero
 */

int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
putchar(n);
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}