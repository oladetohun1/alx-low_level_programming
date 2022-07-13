#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints half of a string
 * @str: strings to be checked
 */

void puts_half(char *str)
{
	int n,j;


	n = ((strlen(str) - 1) / 2);
	for (j = 0; j < n; j++)
	{
		_putchar(str[n - j]);
	}
	_putchar('\0');
}
