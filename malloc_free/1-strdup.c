#include"main.h"
/**
 *_strdup - duplicate a string
 *@str: string to duplicate
 *Return: duplicated str
 */
char *_strdup(char *str)
{
	int size;
	char *duplicated;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	duplicated = malloc(sizeof(char) * (size + 1));

	if (duplicated == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		duplicated[size] = str[size];

	duplicated[size] = '\0';

	return (duplicated);
}
