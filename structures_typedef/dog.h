#ifndef do
#define do
/**
* struct dog - struct
* @name: dog's name
* @age : dog's age
* @owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
