#include "main.h"
/**
 * print_rev -> A function that prints a string in reverse,
 * followed by a new line
 *
 * Return: Always 0
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b] !='\0')
	{
		b++;
	}
	b=b-1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
