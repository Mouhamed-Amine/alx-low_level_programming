#include "variadic_functions.h"
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int sum = 0,i=sum;

	if (!n)
		return (0);

	va_start(vl, n);
	while (i--)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);

	return (sum);
}
