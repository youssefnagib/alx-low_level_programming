#include "lists.h"
/**
 * add_node_end - add node at the end
 *
 * @head: Pointer head
 *
 * @str: String new node
 *
 * Return: new
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = (NULL);
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
