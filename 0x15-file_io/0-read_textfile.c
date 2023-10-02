#include "main.h"
/**
 * read_textfile - Read and display the content of a file
 * @filename: Name of the file to read
 * @letters: Number of bytes to read and display
 * Return: Number of bytes read and displayed, or -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (-1);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (-1);

	return (bytes_read);
}
