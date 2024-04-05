#include "main.h"

/**
* reverse_array - Reverse the content of an array of integers
* @a: Pointer to the array
* @n: Number of elements in the array
*
* Description: This function reverses the content of the array @a
*              in place.
*/
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}

