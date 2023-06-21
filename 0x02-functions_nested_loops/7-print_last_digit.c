#include "main.h"

/**
 * print_last_digit - print.
 *
 * @i: int
 *
 * Description: last digit
 *
 * Return: int
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = i * -1;
	_putchar('0' + i);
	return (i);
}
