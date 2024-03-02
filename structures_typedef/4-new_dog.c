#include"dog.h"
#include<string.h>
/**
 *new_dog - function that creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: ptrnd
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, g;
	dog_t *ptrnd;
	
	for (; name[a] != '\0'; a++);

	for (; owner[b] != '\0'; b++);

	ptrnd = malloc(sizeof(dog_t));
	if (ptrnd == NULL)
		return (NULL);

	ptrnd->name = malloc((a + 1) * sizeof(char));
	if (ptrnd->name == NULL)
	{
		free(ptrnd);
		return (NULL);
	}

	for (g = 0; g <= a; g++)
		ptrnd->name[g] = name[g];
	
	ptrnd->age = age;

	ptrnd->owner = malloc((b + 1) * sizeof(char));
	if (ptrnd->owner == NULL)
	{
		free(ptrnd);
		return (NULL);
	}

	for (g = 0; g <= b; g++)
		ptrnd->owner[g] = owner[g];

	return (ptrnd);
}
