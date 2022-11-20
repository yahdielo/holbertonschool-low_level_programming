#include "main.h"
/**
 * main - copie content of one file to another
 * Return: copy of file content to another
 */
int main(void)
{
	FILE *fd1, *fd2;
	char ch;

	fd1 = fopen("file_from", "r");

	if (fd1 == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd2 = fopen("file_to", "w");

	if (fd2 == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file\n");
		exit(98);
	}

	while ((ch = fgetc(fd1)) != EOF)
	{
		fputc(ch, fd2);
	}
	fclose(fd1);
	fclose(fd2);
	return (0);
}
