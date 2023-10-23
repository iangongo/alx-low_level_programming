#include "main.h"

/**
  * _memcpy - this is the main function prototype
  *
  * @src: this is the Source parameter
  *
  * @dest: this the Destination parameter
  *
  * @n: this is the Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
