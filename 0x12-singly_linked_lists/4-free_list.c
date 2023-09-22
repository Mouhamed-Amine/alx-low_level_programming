#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *actual_node, *node_suiv;
	
	if(head)
		return;
	actual_node=head;
	while (actual_node)
	{
		node_suiv= actual_node->next;
		free(actual_node->str);
		free(actual_node);
		actual_node=node_suiv;
	}
}
