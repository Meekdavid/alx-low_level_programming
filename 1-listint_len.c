#include "lists.h"

/**
 * listint_len - Calculate the
 * @h: Pointer to a list.
 * Return: I
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *nn;
	unsigned int mbo = 0;

	nn = h;
	while (nn)
	{
		mbo++;
		nn = nn->next;
	}
	return (mbo);
}
