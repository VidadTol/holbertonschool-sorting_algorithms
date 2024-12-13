#include "sort.h"


/**
 *swap - function that swaps values in an array
 *@a: first element
 *@b: second element
 */
void swap(int *a, int *b)
{
	int temp = *a;/*sav la val de arr[i] ds temp*/

	*a = *b;/*copie la val de arr[j] ds arr[i]*/
	*b = temp;/*copie la val sav ds temp ds arr[j]*/
}

/*
 *lomuto_partition - partitions the array using lomuto's partitioning scheme
 *@array: the array to partition
 *@low: the lowest index of the partition
 *@hight: the hightest index of the partition
 *@size: the size of array
 *Return: The index of the pivot element
 */

int lomuto_partition(int *array, int low, int hight, size_t size)
{
	/* Initialize pivot to be the first element*/
	int pivot = array[hight];
	int i = low - 1;
	int j = 0;

	for (j = low; j <= hight - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hight])
	{
		swap(&array[i + 1], &array[hight]);
		print_array(array, size);
	}

	return (i + 1);
}
/**
 *quick_sort_recursive - sort the array using quick sort algo
 *@array: the array to sort
 *@low: lowest index to sort
 *@hight: highest index to sort
 *@size: the size of array
 */

/*Fonction récursive pour implémenter le tri rapide*/
void quick_sort_recursive(int *array, int low, int hight, size_t size)
{
	int pivot;

	if (low < hight)
	{
		pivot = lomuto_partition(array, low, hight, size);/*partitione le tableau*/
		quick_sort_recursive(array, low, pivot - 1, size);/*trie recur tabl gauche*/
		quick_sort_recursive(array, pivot + 1, hight, size);/*trie recur tabl droit*/
	}
}

/**
 * quick_sort - sort an array of integers in ascending order
 * using the quick sort algo
 * @array: the array to be printed after each time we swap two elements
 * @size: the size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
