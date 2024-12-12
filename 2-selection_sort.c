#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: The array to sort
 * @size: Number of elements in the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i; /* Suppose que le minimum est le premier élément*/

		/*Trouver l'élément minimum dans la partie non triée du tableau*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Échanger l'élément minimum trouvé avec le premier élément*/
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/*Imprimer le tableau après chaque échange*/
			print_array(array, size);
		}
	}
}

