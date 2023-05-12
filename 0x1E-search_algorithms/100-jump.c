#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
	{
		return (-1);
	}
	printf("Value checked array[0] = [%d]\n", array[0]);
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);
	while (prev <= jump && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);
}
