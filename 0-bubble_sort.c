#include "sort.h"
#include <stdio.h>

/**
 *swap - function that swaps values in an array
 *@i: element to be swapped with j
 *@j: element to be swapped with i
 *@arr: pointer to the array wherre we swap the values
 */

void swap(int *arr, size_t i, size_t j)
{
	size_t temp = arr[i];/*sav la val de arr[i] ds temp*/

	arr[i] = arr[j];/*copie la val de arr[j] ds arr[i]*/
	arr[j] = temp;/*copie la val sav ds temp ds arr[j]*/
}

/**
 *bubble_sort - sorts an array using bubble sort algorithm
 *@size: size to be sorted
 *@array:array to be sorted
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
/*1er boucle pour eff plusieurs pass sur le tableau*/
	for (i = 0; i < (size - 1) ; i++)
	{
/*2eme boucle pour comparer et echanger les elements*/
		for (j = 0; j < size - i - 1; j++)
/*si l element courant est plus grand que le suivant on les echanges*/
		{
			if (array[j] > array[j + 1])
/*apl de la fonc swap pour echanger array j et array j + 1*/
			{
				swap(array, j, j + 1);
				print_array(array, size);
/*imprime le tabl apres chaque echange pour visual le process de tri*/
			}
		}
	}
}

