#include"main.h"
/**
 *read_textfile - reads and write in the std output the info inside the file
 *@filename: pointer to the file
 *@letters: number of letters
 *Return: returns the file writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor, f_reader, f_res;
	char *str;

	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
		return (0);

	str = malloc(letters);

	f_reader = read(f_descriptor, str, letters);
	if (f_reader == -1)
	{
		free(str);
		return (0);
	}

	f_res = write(1, str, f_reader);
	if (f_res == -1)
	{
		free(str);
		return (0);
	}

	close(f_descriptor);
	return (f_res);
}
