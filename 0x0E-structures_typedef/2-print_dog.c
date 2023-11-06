#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this function name explains code to print struct of dog
 * @d: this pointe denotes struct type
 * Return: Nothing is returned here because data type is void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");

		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		else
		printf("Owner: %s\n", d->owner);
	}
}
