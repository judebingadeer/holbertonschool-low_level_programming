#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
