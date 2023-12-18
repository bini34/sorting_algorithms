#include "sort.h"
/**
 * bubble_sort - sorthing algorithm that it wil sort by repeatedly
 *              swapping the adjacent elements if they are in the
 *              wrong order
 *  @array: array
 *  @size: size of array
 *  Return: none
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}
/**
 * swap - swap two numbers;
 * @x: first number
 * @y: second number
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

