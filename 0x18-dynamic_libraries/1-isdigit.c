#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  a function that checks for a digit (0 through 9).
 *
 * @c:character to be checked
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

