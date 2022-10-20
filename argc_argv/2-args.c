#include "stdio.h"
/**
 * main - get the name of the program
 * @argv: argument vector, get the amount of arguement.
 * @argc: un use parameter
 * Return: return name of the program
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
