#include "main.h"

/**
 * append_text_to_file - func that  appends text at the end of a file
 *
 * @filename: name
 *
 * @text_content: text
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, my_write, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		my_write = write(fd, text_content, i);
		if (my_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
