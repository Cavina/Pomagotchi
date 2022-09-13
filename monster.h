#ifndef _MONSTER_H_
#define _MONSTER_H_
//includes
#include <stddef.h>



//code
typedef struct {
	char name[40];
	char species[40];
	int age;
} Monster;
	
void setName(Monster* self, char* name, size_t length);

void setSpecies(Monster* self, char* species, size_t length);

void setAge(Monster* self, int age);

const char* getName(Monster* self);

const char* getSpecies(Monster* self);

const int getAge(Monster*self);
#endif
