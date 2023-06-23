#include "main.h"

/**
 * print_line - type the alphabet ten times
 *
 * @n: int
 *
 * Description: write alphabet
 *
 * Return: nothing
 */

void print_line(int n)
	{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
