#include"dog.h"
/**
 *free_dog - frees info about dog
 *@d: poiner to dod
 *
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
