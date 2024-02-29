#include "main.h"

/**
 * _isupper - Afficher c lorsque c'est une majuscule
 * @c: c'est le nom de ma variable
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
