#include "main.h"

/**
*print_alphabet-print_alphabet 
 *
 *Description: prints alphabet with putchar
 *
 *Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
