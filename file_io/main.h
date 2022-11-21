#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/*int main(int argc ,char *argv[]);*/
int main();
void close_fd(int fd1, int fd2);
/**
 * close_fd - check for fd1 and fd2 to be valid
 * @fd1: file 1 to verify
 * @fd2: file 2 to very
 */
void close_fd(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}
#endif
