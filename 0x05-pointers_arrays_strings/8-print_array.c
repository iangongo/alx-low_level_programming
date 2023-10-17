#include "main.h"
/**
*print_array - this is the function name
*@a: this is the first function parameter
*@n: this is the second function parameter
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
	printf(", ");
}
	printf("\n");
}
