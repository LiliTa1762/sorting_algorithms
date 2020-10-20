#include "sort.h"

/**
 * insertion_sort_list - sorts a DLL in ascending order
 * @list: double pointer to list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur;

	if (list == NULL || *list == NULL)
		return;

	cur = (*list)->next;

	while (cur)
	{
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			cur->prev->next = cur->next;
			if (cur->next != NULL)
			{
				cur->next->prev = cur->prev;
			}
			cur->next = cur->prev;
			cur->prev = cur->prev->prev;
			cur->next->prev = cur;

			if (cur->prev == NULL)
			{
				(*list) = cur;
			}
			else
			{
				cur->prev->next = cur;
			}
			print_list(*list);
		}
		cur = cur->next;
	}

}
