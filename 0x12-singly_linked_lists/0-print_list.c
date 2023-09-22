#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t compteur= 0;

	while (h)
	{
		if (h->str)
			printf("%s\n",h->str);
			
		else
			printf("[0] (nil)\n");
		h = h->next;
		compteur++;
	}
	return (compteur);
}
