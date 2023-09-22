#include "lists.h"

int _strlen(const char *s)
{
	int compteur = 0;

	while (s[compteur])
		compteur ++;
	return (compteur);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t compteur = 0;

	while (h)
	{
		printf("[%d] %s\n",_strlen(h->str), h->str ? h->str : "(nil)");
		h=h->next;
		compteur++;
	}
	return (compteur);
}
