#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of file
  * @text_content: content of the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
