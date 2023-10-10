#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aww_dog;
	int aww_name = 0, own = 0;

	if (name != NULL && owner != NULL)
	{
		aww_name = strlen(name) + 1;
		own = strlen(owner) + 1;
		aww_dog = malloc(sizeof(dog_t));

		if (aww_dog == NULL)
			return (NULL);

		aww_dog->name = malloc(sizeof(char) * aww_name);

		if (aww_dog->name == NULL)
		{
			free(aww_dog);
			return (NULL);
		}

		aww_dog->owner = malloc(sizeof(char) * own);

		if (aww_dog->owner == NULL)
		{
			free(aww_dog->name);
			free(aww_dog);
			return (NULL);
		}

		aww_dog->name = strcpy(aww_dog->name, name);
		aww_dog->owner = strcpy(aww_dog->owner, owner);
		aww_dog->age = age;
	}

	return (aww_dog);
}
