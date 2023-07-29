#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers using insertion
 * @list: a pointer to the head of a doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *iter, *insert, *tmp;

  if (list == NULL || !(*list) || (*list)->next == NULL)
    return;

  for (iter = (*list)->next; iter != NULL; iter = tmp)
    {
      tmp = iter->next;
      insert = iter->prev;
      while (insert != NULL && iter->n < insert->n)
	{
	  swap_nodes(list, &insert, iter);
	  print_list((const listint_t *)*list);
	}
    }
}
