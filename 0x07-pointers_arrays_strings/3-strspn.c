#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string
 * @accept:number of bytes
 * Return: Returns the number of bytes in the initial segment of s which c
 * onsist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (0);
}
