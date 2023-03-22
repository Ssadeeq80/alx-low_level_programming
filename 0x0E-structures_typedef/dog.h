#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
/**
 * struct dog - dog details struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: a struct to save dog deatails
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

	int _putchar(char c);
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
#endif
