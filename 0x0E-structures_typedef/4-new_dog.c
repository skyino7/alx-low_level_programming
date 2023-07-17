#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - string length function
 * @s: string pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - function
 *
 * @dest: pointer
 * @src: pointer source
 *
 * Return: dest;
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog
 * @name: new dog
 * @age: age of dog in float
 * @owner: owner of the new dog
 * Return: a pointer to main function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_leng;
	int owner_leng;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_leng = _strlen(name);
	owner_leng = _strlen(owner);

	new_dog->name = malloc((name_leng + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		return (NULL);
	}

	new_dog->owner = malloc(owner_leng + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);

}
