#include "main.h"
/**
 * _islower - A function that checks for lowercase
 * @ch: the character to be checked
 *
 * _putchar - prints one charcter at a time
 *
 * Return: Always 0
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

