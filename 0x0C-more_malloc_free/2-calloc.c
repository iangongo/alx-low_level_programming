#include "main.h"


/**
* _calloc - function name allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
*
* @nmemb: function parameter one allocate memory for array
* @size: function parameter two allocate element of size bytes
*
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;


	if (nmemb == 0 || size == 0)
	return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	return (NULL);
	for (b = 0; b < (nmemb * size); b++)
	a[b] = 0;
	return (a);
}
