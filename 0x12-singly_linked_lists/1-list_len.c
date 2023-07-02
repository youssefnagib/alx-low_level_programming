#include "lists.h"

/**
 * list_len - return len
 * @h: Pointer
 *
 * Return: num list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
