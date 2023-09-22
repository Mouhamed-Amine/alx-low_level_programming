#include "lists.h"
#include <stdio.h>

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
        if (h->str)
        {
            unsigned int len = h->len;
            while (len > 0)
            {
                _putchar('0' + len % 10);
                len /= 10;
            }
            _putchar(']');
            _putchar(' ');
            for (unsigned int i= 0; i < h->len; i++)
            {
                _putchar(h->str[i]);
            }
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        h = h->next;
        compteur++;
    }

    return (compteur);
}
