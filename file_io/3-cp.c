#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to an array of pointers
 *
 * Return: 1 if succes -1 if not
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, cls_ft, cls_ff, f_reader, f_w;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	f_reader = read(file_from, str, 1024);
	if (f_reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_w = write(file_to, str, f_reader);
	if (f_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cls_ft = close(file_to);
	cls_ff = close(file_from);
	if (cls_ft == -1 || cls_ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}
