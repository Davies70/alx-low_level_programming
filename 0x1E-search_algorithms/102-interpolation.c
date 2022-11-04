#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * You can assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * To determine the probe position,
 * you can use : size_t pos = low + (((double)(high - low)
 * / (array[high] - array[low])) * (value - array[low]))
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	mid = low + (((double)(high - low) /
		     (array[high] - array[low])) * (value - array[low]));
	if (mid > size)
	{
		printf("Value checked array[%ld] is out of range\n", mid);
	}

	while (array[high] != array[low] &&
	       (value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) /
			     (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
