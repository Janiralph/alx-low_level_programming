#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file
 * @filename: the name of the file to use
 * @letters: the number of letters to read
 * Description: reads a given number of letters
 * Return: the letter read
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int file_descriptor = open(filename, 0_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	{
		return (0);
	}
	if (file descriptor == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	if (bytes read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes read);
}

