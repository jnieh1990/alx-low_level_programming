#include "main.h"
/**
 * puts2 - reset
 *
 * Description: deferencement
 *
 * @str: char
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str + 1 != '\0')
			str++;
	}
	_putchar('\n');
}
