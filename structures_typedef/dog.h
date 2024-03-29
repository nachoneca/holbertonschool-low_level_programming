#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
/**
 * struct dog - a structure representing a dog
 *  * @name: the name of the dog (char *)
 *   * @age: the age of the dog (float)
 *    * @owner: the owner of the dog (char *)
 *Description: structure that represents a dogs, name, age and owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif
