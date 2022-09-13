#include "main.h"

/**
 * main - entry prints _putchar
 *
 * Description: A program that Prints _putchar, and a new line with.
 *
 * Return: always 0
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
