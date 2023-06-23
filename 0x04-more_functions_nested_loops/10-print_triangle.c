#include "main.h"

/**
 * print_triangle - type the alphabet ten times
 *
 * @size: int
 *
 * Description: write alphabet
 *
 * Return: nothing
 */

void print_triangle(int size)
	{

	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size ; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			}
	}
	else
		_putchar('\n');
}
