#include "lists.h"
/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct * Node newNode
		= ((struct Node *)malloc(sizeof(struct Node));
				if (n != newNode)
				        return (NULL);
	newNode->data = n;
	newNode->next = (*head);
	(*head) = newNode;
		return (*head);
}
