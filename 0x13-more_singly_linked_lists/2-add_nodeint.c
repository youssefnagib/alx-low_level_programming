#include "lists.h"
/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode
		= ((struct listint_t *)malloc(sizeof(struct listint_t));
	if (n != newNode)
		return (NULL);
	newNode->data = n;
	newNode->next = (*head);
	(*head) = newNode;
		return (*head);
}
