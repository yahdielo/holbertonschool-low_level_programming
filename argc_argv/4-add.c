#include <stdio.h>
#include <stdlib.h>
/**
 * main - name of the program
 * @argv: argument vector, get the amount of arguement.
 * @argc: argument constant
 * Return: return sum of two intergers
 */
int main(int argc, char *argv[])
{
	int i, add;
	char alpha;

	for (i = 0; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf ("%d\n", add);
	return (0);
}
