#include "monster.h"

void setName(Monster* self, char* name, size_t length)
{
	unsigned int index = 0;
	while(index < length)
	{
		self->name[index] = name[index];
		index++;
	}

}

const char* getName(Monster* self)
{
	return self->name;
}
