#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @d: new name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
