#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the posix.
 * @filename : the name of the file
 * @letters : the characters to be printed from the file.
 * Return: the number of letters to be printed
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
char buffer;
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
int fd = open(filename, O_RDONLY);
int r = read(fp, buffer, 100);
int w = (STDOUT_FILENO, buffer);
if (fd == -1 || r == -1 || w == -1)
{
free(buffer);
perror("Failed to open file");
close(fd);
return (-1);
}
close(fd);
return (r);
}


