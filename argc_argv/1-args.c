#include <stdio.h>
/**
 * main - fucntion that returns number of arguments
 * @argc: argument constant
 * @argv: argument vector
 * Return: number of arguments  to the program
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		/*prnt all arguments*/
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
