/**
 * _isupper - check if char is upper.
 *
 * @c: char to check
 *
 * Description: check lower
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if ((c >= 41) && (c < 91))
		return (1);
	else
		return (0);
}
