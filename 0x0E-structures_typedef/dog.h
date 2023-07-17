#ifndef DOG_H
#define DOG_H

/**
* struct dog - a file contain a def of new elments.
* @name: The First element.
* @age: The second element.
* @owner: The Third element.
*
* Description: dog description
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
