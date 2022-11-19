#include "main.h"
/**
 * read_textfile - function toread a text file and print
 * @filename: pointer to file
 * @letters: numbers of lletters to read and print
 * Return: numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_print;
	char *data = malloc(sizeof(char) * letters);

	/* edge case*/
	if (filename == NULL)
	{
		return (0);
	}

	/*open file*/
	/*check for file not to be null*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	/*read date from file*/
	/*when data gest to null byte then print the data*/
	read(fd, data, (letters));
	data[letters] = '\0';
	read_print = strlen(data);

	close(fd);
	write(STDOUT_FILENO, data, read_print);

	return (read_print);


}
