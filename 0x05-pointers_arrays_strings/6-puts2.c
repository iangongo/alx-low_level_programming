#include "main.h"
/**
 *puts2 - this is the function name
 *@str: this is the function parameter
 *
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
	_putchar(str[i]);
}
_putchar('\n');
}
