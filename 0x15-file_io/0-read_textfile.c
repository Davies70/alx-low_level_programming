#include "main.h"
/**
 * read_textfile - function to read file
 * @filename: name of file to be read
 * @letters: size of characters to be read
 * Return: size of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char portion[BUFFER + 1];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, portion, letters);
	if (size == -1)
		return (0);
	portion[size] = '\0';
	printf("%s", portion);
	close(fd);
	return (size);
}

