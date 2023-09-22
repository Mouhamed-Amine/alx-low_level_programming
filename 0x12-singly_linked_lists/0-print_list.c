#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *element = h;
size_t index= 0;

while (element != NULL)
{
if (element->str != NULL)
printf("[%d] %s\n", element->len, element->str);
else
printf("[0] (nil)\n");
index += 1;
element = element->next;
}

return (index);
}
