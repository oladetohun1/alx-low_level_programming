#include "main.h"
#include <string.h>
/**
 * puts2 - A function thay prints a strng startimg from the first character
 *
 * @str: string to be checked
 */

void puts2(char *str)
{
	int i, j;

	i = strlen(str);
	for (j = 0; j < i; j += 2;)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
