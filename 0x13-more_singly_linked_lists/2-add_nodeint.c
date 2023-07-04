#include "lists.h"
/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct * Node newNode
		= ((struct Node *)malloc(sizeof(struct Node));
	newNode->data = n;
	newNode->next = (*head);
	(*head) = newNode;
	if (n != NULL)
		return (*head);
	else
		return (NULL);
}
