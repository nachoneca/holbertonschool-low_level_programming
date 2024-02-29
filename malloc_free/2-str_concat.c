#include"main.h"
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
 	int l1, l2, a = 0;
	char *unidos;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	
	for (l2 = 0; s2[l2] != '\0'; l2++)

	unidos = malloc((l1 + l2 - 1) * sizeof(char));
	if (unidos = NULL)
		return (NULL);
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		unidos[a++] = s1[l1];
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		unidos[a++] = s2[l2];
	}
	return (unidos);
}
