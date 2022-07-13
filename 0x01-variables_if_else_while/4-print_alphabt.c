#include <stdio.h>
/**
 * main - Entry level
 *
 * Return: Always 0
 */

int main()
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
		putchar('\n');
		return (0);
	}
}
