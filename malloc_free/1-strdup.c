#include"main.h"
/**
 *_strdup - duplicate a string
 *@str: string to duplicate
 *Return: duplicated str
 */
char *_strdup(char *str)
{
	char *duplicated;

	if (str == NULL)
		return (NULL);
	duplicated = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (duplicated == NULL)
		return (NULL);
	strcpy(duplicated, str);
	return (duplicated);
}
