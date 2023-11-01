#include <stdio.h>


/**
* main - function name prints its name, followed by a new line.
* @argc:  function parameter one argument count
* @argv: function parameter two arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argc;


printf("%s\n", argv[0]);
return (0);
}
