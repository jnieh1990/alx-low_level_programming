/**
 * main - entry point
 *
 * Description: write putchar
 *
 * Return: always true - 0
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
	{
	char _putchar [12] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (_putchar [i] != '\n')
	{
		putchar (_putchar [i]);
		i++;
	}
	exit(0);
}
