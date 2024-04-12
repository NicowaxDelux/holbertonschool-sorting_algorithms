#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
  * insertion_sort_list - function that sorts a doubly linked list of
  * integers in ascending order using the Insertion sort algorithm
  *
  * @list: pointer to node list
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *prev = NULL, *aux = NULL;

	curr = *list;

	while (curr != NULL)
	{
		if (!curr->prev)
		{
			curr = curr->next;
			continue;
		}
		prev = curr->prev;
		if (curr->n < prev->n)
		{

			if (prev->prev == NULL)
			{
				*list = curr;
			}
			else
			{
				prev->prev->next = curr;
			}
			aux = curr->next;
			curr->next = prev;
			curr->prev = prev->prev;

			prev->next = aux;
			if (aux)
				prev->next->prev = prev;
			prev->prev = curr;


			print_list(*list);
			continue;
		}


		curr = curr->next;
	}
}
