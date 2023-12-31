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
		return (NULL);
	}
	ndog->name = malloc((sizeof(char) * n) + 1);
	if (ndog->name == NULL)
	{;
		free(ndog);
		return (NULL);
	}
	for (i = 0 ; i < n ; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';
	ndog->owner = malloc((sizeof(char) * o) + 1);
	if (ndog->owner == NULL)
	{;
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0 ; i < o ; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';
	ndog->age = age;
	return (ndog);
}
