#ifndef DOG_H
#define DOG_H

/**
 * struct dog_s - A new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: A new type struct dog with the above elements.
 */
typedef struct dog_s
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */

