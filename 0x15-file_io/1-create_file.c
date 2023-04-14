#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * creat_file - create file and write into file
 * @filename: name of file
 * @text_content: text to be written
 * Description: creates a file and writes on it
 * Return: status
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, 0_WRONLY | 0_trunc, 0600);
	int len = 0;
	ssize_t byes_written = write(fd, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-);
	}
	if (text content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
