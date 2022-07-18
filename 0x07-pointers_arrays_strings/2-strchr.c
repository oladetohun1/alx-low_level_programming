#include "main.h"
/**
 * _strchr -write a function that locates a character in a string.
 * @s: string where the pointer is returned to
 * @c: charcter to be checked
 * Return: Returns a pointer to the first occurrence of the character c in t
 * he string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
