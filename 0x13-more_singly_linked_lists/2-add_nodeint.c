#include "lists.h"

/**
 * add_nodeint - adding a new node at the beginning of the function
 * of a linked list or function
 * @head: head of a list or function
 * @n: n element.
 *
 * Return: All addresses, if it is a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *old;

  old = malloc(sizeof(listint_t));

  if (old == NULL)
    return (NULL);

  old->n = n;
  old->next = *head;
  *head = old;

  return (*head);
}
