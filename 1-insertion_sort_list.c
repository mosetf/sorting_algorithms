#include "sort.h"
/**
 * swap_nodes - swaps  nodes in a doubly linked list
 * @h: a pointer to the head
 * @node1: a pointer to the 1st node
 * @node2: points to the second node
 */
void swapnodes(listint_t **h, listint_t **node1, listint_t *node2)
{
(*node1)->next = node2->next;
if (node2->next != NULL)
	node2->next->prev = *node1;
node2->prev = (*node1)->prev;
node2->next = *node1;
if ((*node1)->prev != NULL)
	(*node1)->prev->next = node2;
else
	*h = node2;
(*node1)->prev = node2;
*node1 = node2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion
 * @list: a pointer to the head of doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *iter, *insert, *temp;

  if (list == NULL || !(*list) || (*list)->next == NULL)
    return;

  for (iter = (*list)->next; iter != NULL; iter = temp)
    {
      temp = iter->next;
      insert = iter->prev;
      while (insert != NULL && iter->n < insert->n)
	{
	  swap_nodes(list, &insert, iter);
	  print_list((const listint_t *)*list);
	}
    }
}
