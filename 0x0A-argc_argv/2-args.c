#include <stdio.h>


/**
* main - function name prints all arguments it receives.
* @argc: function parameter one argument count
* @argv: funtion parameter two arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
int i;


for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);


return (0);
}
