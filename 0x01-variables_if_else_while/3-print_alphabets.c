#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and uppercase
 *iputchar - prints one character at a time to the screen
 * Return: Always 0
 */

int main(void)
{

	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
