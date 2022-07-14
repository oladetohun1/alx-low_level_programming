#include "main.h"
#include <stdio.h>

/**
 * _strncpy - A function that copies a string
 * @dest: where it is copied to
 * @src: where it is copied from
 * @n: number of times
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;i <=n;i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
