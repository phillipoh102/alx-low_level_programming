/* 
This program defines a new type struct dog with the following elements: name, age, and owner.
*/

#include <stdio.h>
#include <stdlib.h>

// Define the struct dog
struct dog {
    char *name;
    float age;
    char *owner;
};

int main() {
    // Create a new dog
    struct dog my_dog;
    
    // Assign values to the dog's elements
    my_dog.name = "Fido";
    my_dog.age = 2.5;
    my_dog.owner = "John";
    
    // Print out the dog's information
    printf("Name: %s\n", my_dog.name);
    printf("Age: %.1f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);
    
    return 0;
}
