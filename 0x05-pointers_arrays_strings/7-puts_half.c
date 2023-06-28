#include "main.h"
/**
 * puts_half - reset
 *
 * Description: deferencement
 *
 * @str: char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
		j = ((i - 1) / 2) + 1;
	else
		j = j / 2;

	for (; j < i ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
