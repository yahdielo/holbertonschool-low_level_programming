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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);


	return (0);
}
