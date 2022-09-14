#ifndef _TIMER_H_
#define _TIMER_H_

typedef struct {
	unsigned int seconds;
	unsigned int minutes;
	unsigned int pom_length;
} Timer;


void setTime(Timer* self, unsigned int seconds, unsigned int minutes);

void setSeconds(Timer* self, unsigned int seconds);

void setMinutes(Timer* self, unsigned int minutes);

void setPomodoroLength(Timer* self, unsigned int length);

const char* getTimeLeft(Timer* self);

const unsigned int getPomodoroLength(Timer* self);


#endif
