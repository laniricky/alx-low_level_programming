#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog's structural information
 * @name: name member
 * @age: age member
 * @owner: owner member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
