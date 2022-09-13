#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet with _putchar
 *
 * Return: void
 */


void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'm'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}