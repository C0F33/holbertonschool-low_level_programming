#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog- creates space for a new dog
 * @name: string
 * @age: int
 * @owner: name of owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (!name || !owner)
return (NULL);
dog_t *p_dog = malloc(sizeof(dog_t));
if (!p_dog)
return (NULL);

p_dog->name = strdup(name);
p_dog->owner = strdup(owner);
if (!p_dog->name || !p_dog->owner)
{
free(p_dog->name);
free(p_dog->owner);
free(p_dog);
return (NULL);
}
p_dog->age = age;
return (p_dog);
}
