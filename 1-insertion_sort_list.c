#include "sort.h"
#include <stdio.h>
/**
 *swap_nodes - that sorts a doubly linked list of integers 
 *in ascending order using the Insertion sort algorithm
 *@list: pointer to the list we need to sort
 *Return: nothing
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
	{
		node1->prev->next = node2;
	}
	else
	{
		*list = node2;
	}
	if (node2->next)
	
	node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

		sorted = (*list)->next;

	while (sorted != NULL)
	{
		next = sorted->next;
		current = sorted->prev;
		while (current != NULL && sorted->n < current->n)
		{
			swap_nodes(list, current, sorted); 
			print_list(*list); 
			current = sorted->prev;
		}
		sorted = next;
	}
}

