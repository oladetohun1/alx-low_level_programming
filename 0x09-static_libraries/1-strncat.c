#include "main.h"
#include <string.h>
/**
 * _strncat - A function that concatenates two strings
 * @dest: where to be concatebated to
 * @src: what to be concatenated
 * @n: number of tumes to be concatenated
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	len1 = strlen(dest);
	for (i = 0; i <= n - 1 && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
