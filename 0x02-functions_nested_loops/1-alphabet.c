#include "main.h"
/**
 * print_alphabet -  function that prints the alphabet,
 * in lowercase,followed by new line
 * _putchar - always prints one char to std output
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

