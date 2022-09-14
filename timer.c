#include "timer.h"
#include <stdio.h>

void setTime(Timer* self, unsigned char seconds, unsigned char minutes)
{
	self->minutes = minutes;
	self->seconds = seconds;
}

void setSeconds(Timer* self, unsigned char seconds)
{
	self->seconds = seconds;
}

void setMinutes(Timer* self, unsigned char minutes)
{
	self->minutes = minutes;
}

unsigned char getSeconds(Timer* self)
{
	return self->seconds;
}

unsigned char getMinutes(Timer* self)
{
	return self->minutes;
}

unsigned char getPomLength(Timer* self)
{
	return self->pom_length;
}
void setPomodoroLength(Timer* self, unsigned char length)
{
	self->pom_length = length;
}

char* getTimeLeft(Timer* self)
{
	char* string = malloc(12);
	sprintf(string, "%02d:%02d", 1, 25);
	return string;
}


void tickSecond(Timer* self)
{
	--self->seconds;
}

void tickMinute(Timer* self)
{
	if(self->seconds == 0)
	{
		--self->minutes;
	}
}
