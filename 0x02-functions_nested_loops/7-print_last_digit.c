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
	if (i < 0)
		i = i * -1;
	i = i % 10;
	_putchar('0' + i);
	return (i);
}
