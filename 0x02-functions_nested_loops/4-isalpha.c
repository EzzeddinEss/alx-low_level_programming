#include "main.h"
/**
 * _isalpha - check if the charcter is a lower case or uppercase
 *
 * Return: 1 if true, else return 0.
 *
 * @c: is the checking parameter
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
