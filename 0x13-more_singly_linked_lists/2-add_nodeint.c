#include "lists.h"
/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode
		= malloc(sizeof(struct listint_t));
	if (n != newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	*head = newNode;
		return (newNode);
}
