#include<iostream>
#include<string>
#include<iomanip>
#include"Time.h"
using namespace std;

int main() {
	Time wakeUp(6, 45, 0);
	const Time noon(12, 0, 0);

	wakeUp.setHour(18);

//	noon.setHour();

	wakeUp.getHour();

	noon.getMinute();
	noon.printUniversal();

//	noon.printStandard();

	return 0;
}