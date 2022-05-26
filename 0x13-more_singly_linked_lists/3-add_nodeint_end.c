#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *demp, *demp2;

  demp = malloc(sizeof(listint_t));
  if (demp == NULL)
    return (NULL);

  demp->n = n;
  demp->next = NULL;

  if (*head == NULL)
    {
      *head = demp;
      return (demp);
    }

  demp2 = *head;
  while (demp2->next)
    demp2 = demp2->next;
  demp2->next = demp;
  return (demp);
}
