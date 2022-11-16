#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - a structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description:picture of a dog with the dog name,age and age of it's  owner
 */
struct dog
{	char *name;
			float age;
				char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
