/**
 * _abs - absolute v
 *
 * @i: int to check
 *
 * Description: abs
 *
 * Return: absolute int
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (i * -1);
	else
		return (0);
}
