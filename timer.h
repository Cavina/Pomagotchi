#ifndef _TIMER_H_
#define _TIMER_H_

typedef struct {
	unsigned char seconds;
	unsigned char minutes;
	unsigned char pom_length;
} Timer;


void setTime(Timer* self, unsigned char seconds, unsigned char minutes);

void setSeconds(Timer* self, unsigned char seconds);

void setMinutes(Timer* self, unsigned char minutes);

unsigned char getSeconds(Timer* self);

unsigned char getMinutes(Timer* self);

unsigned char getPomLength(Timer* self);

void setPomodoroLength(Timer* self, unsigned char length);

char* getTimeLeft(Timer* self);

void tickSecond(Timer* self);

void tickMinute(Timer* self);



#endif
