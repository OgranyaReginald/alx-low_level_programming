#include "main.h"

/**
 * main_ Entry point
 *
 * Description: A program that Prints _putchar, and a new line with.
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
