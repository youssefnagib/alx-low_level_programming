#include "main.h"

/**
 * create_file - func that create file
 *
 * @filename: name
 * @text_content: text
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, my_write, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		my_write = write(fd, text_content, i);
		if (my_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
