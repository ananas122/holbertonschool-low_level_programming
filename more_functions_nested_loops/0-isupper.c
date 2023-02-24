/**
 * _isupper -  function that checks for uppercase.
 * @c: character to check for uppercase
 * Return: 1 if c is uppercase, otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
