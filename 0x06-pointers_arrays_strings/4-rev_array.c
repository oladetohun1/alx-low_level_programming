#include "main.h"

/**
 * reverse_array - a functom that reverses the elements of an int type array
 *
 * @a: array to be reversed
 * @n: number of element in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	for (i = 0; i < (n) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
