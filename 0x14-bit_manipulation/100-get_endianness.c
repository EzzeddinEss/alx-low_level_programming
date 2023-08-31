#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big, 1 for little.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *chr = (char *)&num;

	return (*chr);
}
