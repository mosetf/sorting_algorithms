#include "sort.h"
/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @h: points to the head
 * @n1: a pointer to the 1st node
 * @n2: the second nodes pointer
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
  (*n1)->next = n2->next;
  if (n2->next != NULL)
    n2->next->prev = *n1;
  n2->prev = (*n1)->prev;
  n2->next = *n1;
  if ((*n1)->prev != NULL)
    (*n1)->prev->next = n2;
  else
    *h = n2;
  (*n1)->prev = n2;
  *n1 = n2->prev;
}
