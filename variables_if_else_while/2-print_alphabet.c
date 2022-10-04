#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare variable */
	char ch = 'a';

	while (ch <= 'z\n')
	{
	putchar(ch);
	ch++;
	}

	return (0);
}
