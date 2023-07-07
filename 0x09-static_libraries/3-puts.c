#include "main.h"
#include<stdio.h>

void _puts(char *str);

/**
 * _puts - reset
 *
 * Description: deferencement
 *
 * @str: char
 *
 * Return: void
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

