#include "main.h"
/**
 * print_alphabet_x10 -  function that prints 10 times the alphabet
 * Return: Always 0
 * _putchar - prnts one character at a time
 */

void print_alphabet_x10(void)
{
	int ch,i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
