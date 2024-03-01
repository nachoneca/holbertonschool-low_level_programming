#include"main.h"
/**
 *string_nconcat - conctenate s1 and s2 until n
 *@s1: first str
 *@s2: second str
 *@n: until what byte to concat s2
 *Return: the str united
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c = 0, unidos;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	unidos = a + n;

	res = malloc((unidos) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		res[c++] = s1[a];

	for (b = 0; b < n; b++)
		res[c++] = s2[b];

	return (res);
}
