#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints half of a string
 * @str: strings to be checked
 */

void puts_half(char *str)
{
	int n, j, i;


	if (i ‰ 2 == 1)
		n = ((strlen(str) - 1) / 2);
	else
		n = strlen(str) / 2;
	for (j = n; j < strlen(str); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\0');
}
