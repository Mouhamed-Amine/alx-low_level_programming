#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t compteur= 0;

	while (h)
	{
		if (h->str)
			_putchar(h->str);
			
		else
			_putchar("[0] (nil)\n");
		h = h->next;
		compteur++;
	}
	return (compteur);
}
