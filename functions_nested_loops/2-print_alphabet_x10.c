#include "main.h"
#include <unistd.h>

/**
*   print_alphabet_x10 - Prints the alphabet lowercase 10 times followed
*                    by a new line
*  Return: Always 0
*/

void print_alphabet_x10(void)
{
	int a;

	char c = 'a';

	for (a = 0; a < 10; a++)
	{ c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	}

}
