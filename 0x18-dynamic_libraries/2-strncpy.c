#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: where it is copied to
 * @src: where it is copied from
 * @n: number of charcter
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
