#include "lists.h"

/**
 * list_len -know len
 *
 * @h: Pointer to the head
 *
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
