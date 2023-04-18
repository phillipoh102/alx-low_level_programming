#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to character string for dog's name
 * @age: Float value for dog's age
 * @owner: Pointer to character string for dog's owner
 *
 * This function initializes a variable of type struct dog with the given values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    // Check if pointer to struct dog is not NULL
    if (d != NULL)
    {
        // Initialize struct members with given values
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
