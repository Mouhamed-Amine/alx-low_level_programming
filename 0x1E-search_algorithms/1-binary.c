#include "search_algos.h"


	


int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int mid;

	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	mid = l + (r - l) / 2;

	if (l == r)
		return (*(array + mid) == value ? (int)mid : -1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_index(array, l, mid - 1, value));
	else
		return (binary_search_index(array, mid + 1, r, value));
}

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}
