#include "lists.h"
/**
 * add_node - func that added node
 * @head: Pointer list
 * @str: String
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len])
	len++;
	new->next = *head;
	new->len = len;
	*head = new;

	return (new);
}
