#include "main.h"

void copy_file(const char *file_from, const char *file_to);
/**
  * main - main function
  * @argc: argument count
  * @argv: arguments passed
  * Return: 0 if successful
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies file
  * @file_from: source file
  * @file_to: destination file
  * Return: void
  */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (!file_from || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/*
	 * if (file_to != NULL)
	 * {
	*/
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/*
	  *if (fd_to == -1)
	 *	{
	 *		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	 *		exit(98);
	 *	}
	 *}
	 */
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
