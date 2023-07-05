#include "lists.h"
/**
 * add_nodeint - function that add node
 *
 * @head: head of the nodes
 *
 * @n: data int
 *
 * Return: address or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode
		= malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
		return (newNode);
}
