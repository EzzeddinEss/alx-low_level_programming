#include <stdio.h>
#include <time.h>

/**
 * main - a program prints all single digit numbers of base 10
 *
 * Return: always zero
 */

int main(void)
{
int number;
while (number < 10)
{
printf("%d", number);
number++;
}
printf("\n");
return (0);
}
