#include "lists.h"

/**
 * nodeint - adding a new node at the beginning of the function
 * of a linked list or function
 * @head: head of a list or function
 *
 *This is David Mboko Function
 * Return: All addresses, if it is a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *da;

  da = malloc(sizeof(listint_t));

  if (da == NULL)
    return (NULL);

  da->n = n;
  da->next = *head;
  *head = da;

  return (*head);
}
