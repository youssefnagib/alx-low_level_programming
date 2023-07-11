#include "main"

/**
 * read_textfile - read text
 *
 * @filename: name
 *
 * @letters: letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, my_read, my_write;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	my_read = read(fd, buffer, letters);
	my_write = write(STDOUT_FILENO, buffer, my_read);
	if (fd == -1 || my_read == -1 || my_write != my_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (my_write);
}
