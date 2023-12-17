#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: Array after each swap.
 * @size: size of array.
 */

void quick_sort(int *array, size_t size)
{
	size_t low, high;

	if (array == NULL || size < 2)
		return;
	low = 0;
	high = size - 1;
	quick_sort_recursive(array, low, high, size);
}
