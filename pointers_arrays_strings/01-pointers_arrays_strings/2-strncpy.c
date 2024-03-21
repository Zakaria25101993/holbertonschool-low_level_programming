#include "main.h"
/**
* _strncpy - check the code for Holberton School students.
* @src: parameter to a src to copy
* @dest: parameter for dest
* @n: parameter for number of bytes
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
