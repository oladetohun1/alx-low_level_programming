#include "main.h"
/**
 * rev_string - A function reverse a string
 * @s: character to be reversed
 */

void rev_string(char *s)
{
	int i,j;
	char b;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	for (j = 0; j <= i / 2; j++)
	{
		b = s[j];
		s[j] = s[i - j];
		s[i - j] = b;
	}
}
