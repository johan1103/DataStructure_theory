#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<ctime>
#include"Time.h"
using std::cout;
using std::cin;
using std::setw;
using std::setfill;

Time::Time() {
	time_t currentTime = time(0);
	tm* locatTime = localtime(&currentTime);
	setTime(locatTime->tm_hour, locatTime->tm_min, locatTime->tm_sec);
}
void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::printUniversal() {
	cout << setfill('0') << setw(2) << hour << ":" <<
		setw(2) << minute << ":" << setw(2) << second << "\n";
}
void Time::printStandard() {
	cout << setfill('0') << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setw(2) << minute << ":" << setw(2) << second << ((hour >= 12) ? "pm" : "am");
}

void Time::setHour(int h) {
	hour = (h >= 0 && h < 24) ? h : 0;
}
void Time::setMinute(int m) {
	minute = (m >= 0 && m < 60) ? m : 0;
}
void Time::setSecond(int s) {
	second = (s >= 0 && s < 60) ? s : 0;
}
int Time::getHour() {
	return hour;
}
int Time::getMinute() {
	return minute;
}
int Time::getSecond() {
	return second;
}