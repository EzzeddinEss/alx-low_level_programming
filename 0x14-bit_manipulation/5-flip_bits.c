#include<stdio.h>
#include"main.h"
/**
 * flip_bits -  function that returns the number of bits to change
 * @n: the first number.
 * @m: the second number
 *
 * Return: the number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xores = n ^ m;
	unsigned int count = 0;

	while (xores != 0)
	{
		if ((xores & 1ul) != 0)
		{
			count = count + (xores & 1);
		}
		xores = xores >> 1;
	}
	return (count);
}
