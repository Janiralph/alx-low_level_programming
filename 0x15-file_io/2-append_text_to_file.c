#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - text to a file
 * @filename: name of file
 * @text_content: the text to be appended
 * Description: appends text to a file
 * Return: status code
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");
	int result = fputs(text_content, fp);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text content == NULL)
	{
		return (-1);
	}
	if (fp == NULL)
	{
		return (-1);
	}

	fclose(fp);

	return (result == EOF ? -1 : 1);
}
