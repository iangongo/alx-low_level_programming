#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function name prints reverse array.
 * @a: function parameter array to be compared.
 * @n: function parameter size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
