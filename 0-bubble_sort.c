#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
  * bubble_sort - function that sorts an array of integers
  * in ascending order using the Bubble sort algorithm
  *
  * @array: array to sorts integers in ascending order
  *
  * @size: size of the array
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, y = 0;
	int temp;

	for (i = 0; i < size; ++i)
	{
		for (y = 0; y < size - i - 1; ++y)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
