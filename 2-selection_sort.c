#include "sort.h"
/**
 * selection_sort -  a function that sorts an array of integers in
 *		ascending order using the Selection sort algorithm
 * @array: a collection of intiger
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int swapped;

	for (i = 0; i  < size - 1; i++)
	{
		min_idx = i;
		swapped = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				swapped = 1;
			}
		}
		if (swapped)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - it swap two functions
 * @x: first intiger
 * @y: second intiger
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;

}
