#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: the dog to initialize
 * @name: dog' s name
 * @age: the dog' s age
 * @owner: the owner' s name
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
	       d->owner = owner;
	}
}
