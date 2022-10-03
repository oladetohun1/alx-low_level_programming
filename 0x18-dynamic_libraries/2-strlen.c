#include "main.h"
/**
 * _strlen -> A function that returns the length of a string
 *
 * @s: character whose len is to be checked
 *
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
