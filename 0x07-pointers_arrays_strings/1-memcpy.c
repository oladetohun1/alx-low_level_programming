#include "main.h"
/**
 * _memcpy -> a function that copies memory area
 * The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 * Return: Returns a pointer to dest
 * @dest: where it is copied to
 * @src: where it is copied from
 * @n: n bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
