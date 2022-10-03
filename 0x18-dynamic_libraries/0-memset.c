#include "main.h"
/**
 * _memset -> A function that fills memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area point
 * @s: pointer to memory area to fill
 * @n: The number of bytes to fill
 * @b: constant type
 * ed to by s with the constant byte b
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
