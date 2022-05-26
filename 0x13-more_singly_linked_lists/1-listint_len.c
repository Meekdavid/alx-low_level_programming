#include "lists.h"

/**
 * listint_len - returns
 * a linked list.
 * @h: head
 *
 * Return: numbers
 */
size_t listint_len(const listint_t *h)
{
  size_t nn = 0;

  while (h != NULL)
    {
      h = h->next;
      nn++;
    }
  return (nn);
}
