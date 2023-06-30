#include "main.h"
/**
 * reverse_array - concatenates two strings
 *
 * @a: input value
 *
 * @n: input value
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, t;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}

