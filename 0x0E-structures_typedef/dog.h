#ifndef DOG_H
#define DOG_H

/**
 * dog_p - Typedef for structure dog
 */
typedef struct dog dog_p;

/**
 * struct dog - structure for dog
 * @name: first member (name of dog)
 * @age: second member (age of dog)
 * @owner: third member (owner of the dog)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_p *new_dog(char *name, float age, char *owner);
void free_dog(dog_p *d);

#endif
