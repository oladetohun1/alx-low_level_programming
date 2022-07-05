#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * putchar - prints single characters to the std output
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

	return (0);
}
