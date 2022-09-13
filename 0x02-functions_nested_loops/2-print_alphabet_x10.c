#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	char ch;
	int;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n')
	}
}
