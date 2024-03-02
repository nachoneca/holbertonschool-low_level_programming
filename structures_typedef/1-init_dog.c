#include "dog.h"
/**
* init_dog - initializes a struct dog
* @d: pointer to the struct dog variable to initialize
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: This function initializes the members of the struct dog
* with the provided values for name, age, and owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
