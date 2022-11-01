#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *  using the binary search algorithm
 *  @array: Where array is a pointer to the first element of the array
 *  to search in
 *  @size: number of elements in array
 *  @value: value to search for
 *  Return: the index where value is located
 *  If value is not present in array or if array is NULL, return -1
 *  Assume that array will be sorted in ascending order
 *  Assume that value won’t appear more than once in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		m = left + ((right - left) / 2);

		if (array[m] < value)
			left = m + 1;
		else
			right = m;
		if (array[m] == value)
		{
			return (m);
		}
	}
	return (-1);
}

