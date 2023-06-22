#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: write alphabet
 *
 * Return: nothing
 */

void print_most_numbers(void)
	{
		char c;

		for (c = 48; c <= 57; c++)
		{
			if (c != '2' && c != '4')
				_putchar(c);
		}
		_putchar('\n');
	}
