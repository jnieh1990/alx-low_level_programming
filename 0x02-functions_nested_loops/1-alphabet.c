#include "main.h"

/**
 * main - entry point
 *
 * Description: write putchar
 *
 * Return: always true - 0
 */

void print_alphabet(void)
	{
	char c;
	for (c = 97; c <= 122; c++)
		{	
			_putchar(c);
		}
	_putchar('\n');
	}
