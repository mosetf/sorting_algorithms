#include "sort.h"

/**
 *bubble_sort - sorts an array
 *@array: the array to be sorted
 *@size: the arrays size
 *
 */
void bubble_sort(int *array, size_t size)
{
    int x = 0;
    int temp;
    size_t i = 0;

    while (i < size - 1)
    {
        size_t j = 0;
        while (j < size - 1 - i)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                x = 1;
            }
            j++;
        }

        if (x == 0)
        {
            break;
        }

        i++;
    }
}
