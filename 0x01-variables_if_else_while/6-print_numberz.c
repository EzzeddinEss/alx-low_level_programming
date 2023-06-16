#include <stdio.h>
#include <time.h>

/**
 * main - a program that prints all single digits with putchar only
 *
 * Return: always zero
 */

int main(void)
{
int digits;
for (digits = '0'; digits <= '9'; digits++)
putchar(digits);
putchar('\n');
return (0);
}

