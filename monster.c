#include "monster.h"

void setName(Monster* self, char* name, size_t length)
{
	unsigned int index = 0;
	while(index < length)
	{
		self->name[index] = name[index];
		++index;
	}

}

void setSpecies(Monster* self, char* species, size_t length)
{
	unsigned int index = 0;
	while(index < length)
	{
		self->species[index] = species[index];
		++index;
	}
}

void setAge(Monster* self, unsigned int age)
{
	self->age = age;
}

const char* getName(Monster* self)
{
	return self->name;
}

const char* getSpecies(Monster* self)
{
	return self->species;
}

const unsigned int getAge(Monster* self)
{
	return self->age;
}
