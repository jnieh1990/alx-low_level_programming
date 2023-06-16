#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet
 *
 * Return: always true, always 0
 */

int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar (c);
		c = c + 1;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar (c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
