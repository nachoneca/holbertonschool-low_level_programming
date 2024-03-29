#include"main.h"
/**
 *create_file - create a file with text in it
 *@filename: pointer to an array wit its name
 *@text_content: pointer to the arrray of chars
 *Return: -1 if function fails in each case, 1 if SUCCESS.
 */
int create_file(const char *filename, char *text_content)
{
	int f_descriptor, f_w, i = 0;

	if (filename == NULL)
		return (-1);
	f_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_descriptor == -1)
		return (-1);
	for (; text_content[i] != '\0'; i++)
		;
	f_w = write(f_descriptor, text_content, i);
	if (f_w == -1)
		return (-1);
	close(f_descriptor);
	return (1);
}
