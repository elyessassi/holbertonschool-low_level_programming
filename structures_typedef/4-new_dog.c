#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - fonction to enter a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return the struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int n = strlen(name);
	int o = strlen(owner);
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * n);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		return (NULL);
	}
	for (i = 0 ; i < n ; i++)
		ndog->name[i] = name[i];
	ndog->owner = malloc(sizeof(char) * o);
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		return (NULL);
	}
	for (i = 0 ; i < o ; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;
	free(ndog->name);
	free(ndog->owner);
	free(ndog);
	return (ndog);
}
