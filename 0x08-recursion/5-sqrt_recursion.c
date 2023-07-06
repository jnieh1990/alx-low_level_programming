/**
 * _sqrt_root_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * @i: iterative number
 *
 * Return: the resulting square root
 */

int _sqrt_root_recursion(int n, int i)
{
	int res = i * i;

	if (n == res)
		return (i);
	if (n < res)
		return (-1);
	return (_sqrt_root_recursion(n, (i + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_root_recursion(n, 0));
}
