#include <stdio.h>
#include <stdlib.h>
/**
 * main - get the name of the program
 * @argv: argument vector, get the amount of arguement.
 * @argc: argument constant
 * Return: return sum of two intergers
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int a, b, mul;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);

	if (argc == 1)
	{
		printf("Error");
		return (1);
	}

	return (0);
}
