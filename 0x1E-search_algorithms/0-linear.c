#include "search_algos.h"

/**
 * linear_search - Searching value in an array of
 * integers using the Linear search algorithm.
 *
 * @array: An array input
 * @size:The Size of array
 * Return:Always EXIT when SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
