#include"dog.h"
/**
 *print_dog - print dog info
 *@d: pointer to the struc dog name
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("(nil)");
		else
			printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("nil");
		else
			printf("Owner: %s\n", d->owner);




}