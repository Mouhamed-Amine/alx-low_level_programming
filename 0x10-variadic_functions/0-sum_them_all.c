#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int sum = 0,i;

	if (n==0)
			return (0);

	va_start(vl, n);
	for (i=0; i < n; i++)
	{
		sum += va_arg(vl, int);
	}
	va_end(valist);

	return (sum);
}
