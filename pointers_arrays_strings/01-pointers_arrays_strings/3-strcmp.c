#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s1[i] == s2[i])
	{
	i++;
	}

	return (s1[i] - s2[i]);
}
