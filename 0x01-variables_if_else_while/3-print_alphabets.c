#include <stdio.h>


/**
 * main Entry point
 *
 * Return:n Always 0 (success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putcchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
