#include "lists.h"
/**
 * listint_len - func len
 *
 * @h: ptr
 *
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
