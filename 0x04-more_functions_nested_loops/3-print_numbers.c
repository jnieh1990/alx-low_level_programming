/**
 * print_alphabet - entry point
 *
 * Description: write alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
	{
		char c;

		for (c = 48; c <= 57; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
