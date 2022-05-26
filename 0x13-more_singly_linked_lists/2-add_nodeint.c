#include "lists.h"
#include <stdlib.h>

/**
 * nodeint - adding a new node at the beginning of the function
 * of a linked list or function
 * @head: head of a list or function
 * @n: n element.
 *
 *This is David Mboko Function
 * Return: All addresses, if it is a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *dave;

  dave = malloc(sizeof(listint_t));

  if (dave == NULL)
    return (NULL);

  dave->n = n;
  dave->next = *head;
  *head = dave;

  return (*head);
}
