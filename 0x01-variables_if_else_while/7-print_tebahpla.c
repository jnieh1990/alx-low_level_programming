#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: inversed alphabet
 *
 * Return: always true, always 0
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar (c);
		c = c - 1;
	}
	putchar ('\n');
	return (0);
}
