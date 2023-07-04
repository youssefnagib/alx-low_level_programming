#include "lists.h"
/**
 *  print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: head
 *
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while(h)
	{
		printf("%d", h->n);
		counter++;
		h = h->next;
	}
return (counter)
}
