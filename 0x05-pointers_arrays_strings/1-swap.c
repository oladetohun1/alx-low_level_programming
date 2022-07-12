#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 * @a: first character
 * @b: second character
 *
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
