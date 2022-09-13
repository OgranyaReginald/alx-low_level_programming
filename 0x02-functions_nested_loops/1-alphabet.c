#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: prints alphabet with putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
