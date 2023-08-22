#include "main.h"

/**
 * rev_string - a function that takes a pointer to an int as parameter and
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

void rev_string(char *s)
{
	int i = 0, case, x;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	case = i;
	x = i / 2;
	i = 0;

	while (i <= x)
	{
		c = s[i];
		s[i] = s[case];
		s[case] = c;
		i++;
		case--;
	}
}
