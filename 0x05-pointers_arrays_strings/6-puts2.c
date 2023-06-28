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
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

	for (; j < i ; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
