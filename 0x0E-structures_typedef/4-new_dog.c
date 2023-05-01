#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - getting length of string
 * @str: string to check length of
 * Return: length of string
 */
int len(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
		;
	return (x);
}

/**
 * strcpy - copying the string pointed to src
 * @dest: destination buffer
 * @src: source to copy
 * Return: copied source
 */

char *strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; d <= len(src); d++)
		dest[d] = src[d];
	return (dest);
}
/**
 * new_dog - creating new instance of struct dog
 * @name: member(name of new dog)
 * @age: member(age of new dog)
 * @owner: member(owner name)
 * Return: initialized struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *copy_of_new_name;
	char *copy_of_new_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		copy_of_new_name = malloc(len(name) + 1);
		if (copy_of_new_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(copy_of_new_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		copy_of_new_owner = malloc(len(owner) + 1);
		if (copy_of_new_owner == NULL)
		{
			free(copy_of_new_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(copy_of_new_owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
