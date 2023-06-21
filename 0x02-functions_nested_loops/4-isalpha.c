/**
 * _isalpha - check if char is alpha.
 *
 * @c: char to check
 *
 * Description: check alpha
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c < 123)) || ((c >= 65) && (c < 91)))
		return (1);
	else
		return (0);
}
