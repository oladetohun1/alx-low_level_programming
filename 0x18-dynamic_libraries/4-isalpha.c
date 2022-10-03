#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c:charcter to be checked
 * _putchar - prints one character at a time
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
