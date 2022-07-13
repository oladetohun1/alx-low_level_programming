#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints half of a string
 * @str: strings to be checked
 */

void puts_half(char *str)
{
	int n, j, i;

	i = strlen(str);

	if (i % 2 == 1)
		n = ((i + 1) / 2);
	else
		n = i / 2;
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
