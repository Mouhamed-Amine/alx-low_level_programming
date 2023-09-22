#include "lists.h"
#include <string.h>


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
