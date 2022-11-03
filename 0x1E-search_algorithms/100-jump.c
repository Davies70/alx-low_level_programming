#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * assume that array will be sorted in ascending order
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (array == NULL)
		return (-1);
	start = 0;
	end = sqrt(size);

	if (array[end] < value)
	{

		while (array[end] < value && start < size)
		{
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			start = end;
			end = end + sqrt(size);
			if (end > size - 1)
			{
				printf("Value checked array[%ld] = [%d]\n", start, array[start]);
				printf("Values found between indexes [%ld] and [%ld]\n", start, end);
				return (-1);
			}
		}
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}
	else
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
