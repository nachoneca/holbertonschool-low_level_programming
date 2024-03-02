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
	dog_t *ptrnd;
	ptrnd = (dog_t *)malloc(sizeof(dog_t));
	if (ptrnd == NULL)
		return (NULL);
	ptrnd->name = strdup(name);
	ptrnd->owner = strdup(owner);

	if (ptrnd->name == NULL || ptrnd->owner == NULL)
	{
		free(ptrnd->name);
		free(ptrnd->owner);
		free(ptrnd);
		return (NULL);
	}
	ptrnd->age = age;
	return (ptrnd);
}
