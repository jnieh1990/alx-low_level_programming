/**
 * print_sign - check the sign.
 *
 * @n: int to check
 *
 * Description: check sign
 *
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
