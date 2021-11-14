#pragma once
#ifndef TIME_H
#define TIME_H

class Time {
public:
	Time();
	void setTime(int, int, int);
	void printUniversal();
	void printStandard();

	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();
private:
	int hour;
	int minute;
	int second;
};


#endif // !TIME_H
