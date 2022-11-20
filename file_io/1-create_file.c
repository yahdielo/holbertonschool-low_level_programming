#include "main.h"
/**
 * create_file - function that creates file
 * @filename: name of the file to be created
 * @text_content: content to be store in the file
 * Return: alway 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char buf = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT, 0600);

	write(fd, text_content, buf);

	close(fd);
	return (1);
}
