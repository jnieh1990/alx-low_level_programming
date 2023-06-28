#include "main.h"
/**
 * _puts2 - reset
 *
 * Description: deferencement
 *
 * @str: char
 *
 * Return: void
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
