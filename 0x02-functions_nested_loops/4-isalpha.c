#include "main.h"
 /**
  * _isalpha - checks for alphabeic character
  * @c: c is an ascii character
  * Description: _isalpha
  * Return: 0 if c is a letter, 1 otherwise
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
