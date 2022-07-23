#include <stdio.h>
/**
* main -> A program that prints the name followed by a new line
* Return: an integer
* @argc: number of cli arguments
* @argv: a Vector that stores the cli arguments.
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
