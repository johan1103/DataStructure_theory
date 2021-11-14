#include<iostream>
#include<string>
#include"Time.h"
using std::cout;
using std::cin;

int main() {
	Time temp;
	cout << "present time(standard) : ";
	temp.printStandard();
	cout << "\npresent time(universal) : ";
	temp.printUniversal();
	return 0;
}