#include <stdio.h>
/**
* main -> A program that prints the name followed by a new line
* Return: an integer
* @argc: number of cli arguments
* @argv: a Vector that stores the cli arguments.
*/

int main(int argc, char **argv __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
