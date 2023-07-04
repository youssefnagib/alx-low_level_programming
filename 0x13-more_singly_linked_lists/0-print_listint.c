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
	size_t conter = 0;

	while(h != '\0')
	{
		printf("%d", h);
		conter++;
		h = h -> next;
	}
return (conter)
}
