#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;

	printf("size of a char is: %lu byte(s)\n",sizeof(c));
	printf("size of an int is: %lu byte(s)\n",sizeof(i));
	printf("size of a long int is: %lu byte(s)\n",sizeof(l));
	printf("size of a long long int is: %lu byte(s)\n",sizeof(li));
	printf("size of a float is: %lu byte(s)\n",sizeof(f));
	return (0);
}
