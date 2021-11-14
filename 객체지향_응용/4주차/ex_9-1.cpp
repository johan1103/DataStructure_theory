#include<iostream>
#include<string>
#include<iomanip>
#include"Time.h"
using namespace std;

int main() {
	Time t;
	cout << "the initial universal time is: ";
	t.printUniversal();
	cout << "the initial standard time is: ";
	t.printStandard();
	t.setTime(13, 27, 26);
	cout << "\n\nUniversal time after setTIme is: ";
	t.printUniversal();
	cout << "Standard time after setTime is: ";
	t.printStandard();

	t.setTime(99, 99, 99);
	cout << "\n\nAfter attempting invalid settings: ";
	t.printUniversal();
	cout << "Standard time: ";
	t.printStandard();
	return 0;
}