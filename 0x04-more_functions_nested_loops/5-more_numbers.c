#include "main.h"

/**
 * more_numbers - type the alphabet ten times
 *
 * Description: write alphabet
 *
 * Return: nothing
 */

void more_numbers(void)
	{
	int c;
	int i;

	for (i = 1; i <= 10 ; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (i < 10)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
