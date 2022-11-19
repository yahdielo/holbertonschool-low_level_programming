#include "main.h"
/**
 * _strlen - find lenght of a string.
 * @s: string to find the lenght.
 * Return: the lenght of a string.
 */
int _strlen(char *s)
{
        int counter;

        for (counter = 0; s[counter] != '\0';)
                counter++;

        return (counter);
}

