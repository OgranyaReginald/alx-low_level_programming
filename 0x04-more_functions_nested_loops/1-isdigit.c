#include "main.h"
/**
*_isdigit-checkswetheranumberpassedasanargumentisdigitnumber
* Return: returns 1 if successful or 0 if not
*/
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
