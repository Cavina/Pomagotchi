#include "timer.h"
#include <stdio.h>

void setTime(Timer* self, unsigned int seconds, unsigned int minutes)
{
	self->minutes = minutes;
	self->seconds = seconds;
}

void setSeconds(Timer* self, unsigned int seconds)
{
	self->seconds = seconds;
}

void setMinutes(Timer* self, unsigned int minutes)
{
	self->minutes = minutes;
}

void setPomodoroLength(Timer* self, unsigned int length)
{
	self->pom_length = length;
}

const char* getTimeLeft(Timer* self)
{
	char string[5];
	sprintf(string, "%02d:%02d", self->minutes, self->seconds);
	return string;
}

const unsigned int getPomodoroLength(Timer* self)
{
	return self->pom_length;
}
