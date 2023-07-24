#include "sort.h"
/**
 * bubble_sort - sorts an array
 * @array: array to bé sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t n = size;
	int temp, x;

	if (array == NULL || size < 2)
		return;

	while (n)
	{
		x = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				x = 1;
			}
		}
		n--;
		if (x == 1)
			break;
	}

