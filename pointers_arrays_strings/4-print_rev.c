#include"main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
