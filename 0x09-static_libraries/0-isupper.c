#include "main.h"
#include <stdio.h>

/**
 * _isupper -  a function that checks for uppercase character.
 *
 * @c:character to be checked
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}