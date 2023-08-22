#include "main.h"

/**
 * print_rev - a function that takes a pointer to an int as parameter and
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

void print_rev(char *s)
{
	int i = _strlen(*s);

	
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
