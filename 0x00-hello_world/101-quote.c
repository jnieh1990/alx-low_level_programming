#include <unistd.h>
#include <stdio.h>

/**
 * main - Entrée du programme
 *
 * output - always return 1
 *
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 100);
	return (1);
}
