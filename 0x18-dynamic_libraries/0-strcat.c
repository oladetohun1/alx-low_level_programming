#include "main.h"
#include <string.h>
/**
 * _strcat - A function that concatenates two strings
 * @dest: where the src string would be concatenated to
 * @src: string to be concatenate
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
