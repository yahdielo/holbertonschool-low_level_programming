#include "main.h"
/**
 * append_text_to_file - fucntion to append text at the end of a file
 * @filename: name of file to append text
 * @text_content: content to append
 * Return: 1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, buf = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(fd, text_content, buf);
	}

	close(fd);
	return (1);
}
