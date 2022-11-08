#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


struct Person {
	char *name;
	int age;
	int height;
	int weight;
};
//creates a structure of particular spects of a person
struct Person *Person_creator(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
// malloc gets a memory location to store the struction whose size is taken
//using sizeof
	assert(who != NULL);
// assert makes sure that an actual space in the memory is reserved for
 //the structure and not invalid space(NULL)
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
// this statements make sure the memory location is freed after so as not
//to cause memory leakage
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}
// this just a print out function that uses the pointer syntax
int main(int argc, char *argv[])
{
//make two people structures
	struct Person *joe = Person_creator(
		"joe Alex", 32, 64, 140);

	struct Person *frank = Person_creator(
		"Frank Blank", 20, 72, 180);

	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//make everyone age 20 years and print them again
	joe->age += 20;
	joe->height -=2;
	joe->weight +=40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	// destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);
// this main fuction is pretty much clear and understndable
	return 0;
}
