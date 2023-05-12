#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located, or -1 if it is not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, high = size - 1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], i < high ? ", " : "\n");

		mid = (low + high) / 2;

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}

	return (-1);
}
