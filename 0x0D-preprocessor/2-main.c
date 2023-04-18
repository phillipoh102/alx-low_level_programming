#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the name of the source file to the console.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("%s\n", __FILE__);    // Prints the name of the source file
    return 0;    // Indicates successful termination of the program
}

