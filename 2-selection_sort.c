#include "sort.h"
/**
 *selection_sort- function sorts an array using selection sort algo
 *
 *@array: array to be sorted
 *@size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t a, i, j;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, a = i + 1; j > i; j--)
		{
			if (array[j] < array[a])
			{
				k = j;
			}
		}
		if (array[i] > array[a])
		{
			temp = array[i];
			array[i] = array[a];
			array[a] = temp;
			print_array(array, size);
		}
	}
}
