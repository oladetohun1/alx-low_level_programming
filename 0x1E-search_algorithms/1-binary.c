#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search - Search for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where value is located or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			left = i + 1;
		}
		else
		{
			right = i - 1;
		}
	}
	return (-1);
}
