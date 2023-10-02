#include "main.h"

/**
 * read_textfile - function that converts a binary number to an unsigned int
 * @filename: a
 * @letters: a
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_bytes, num_word;
	
	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		/*free(buffer);*/
		return (0);
	}
	num_word = write(STDOUT_FILENO, buffer, num_bytes);
	if (num_word == -1 || num_bytes != num_word)
	{
		return (0);
	}
	free(buffer);
	close(fd);

	return (num_word);
}
