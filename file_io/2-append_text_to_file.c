#include"main.h"
/**
 *append_text_to_file - append text to a file
 *@filename: pointer to the name of the file
 *@text_content: pointer to the text
 *Return: 1 if succeed, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_descriptor, f_w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	f_descriptor = open(filename, O_APPEND | O_WRONLY);
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
