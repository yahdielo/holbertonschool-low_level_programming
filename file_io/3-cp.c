#include "main.h"
/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: number of arguments
 * Return: copy of content
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, read_file, write_file;
	char *buf[1024];
	/* if number of arguments is not correct exit 97*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	/* if file_from does not exist exit 98*/
	if (fd1 == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1 || argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	while (1)
	{
		read_file = read(fd1, buf, 1024);
		if (read_file == 0) break;
		if (read_file == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_file = write(fd2, buf, read_file);
		if (write_file == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_fd(fd1,fd2);
	return (0);
}
