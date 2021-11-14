#include<iostream>
#include"Time.h"
using namespace std;
int main() {
	Time temp_1;
	Time temp_2(23, 1, 59);
	Time temp_3(22, 59, 59);
	Time temp_4(23, 59, 59);
	temp_1.increase_time();
	temp_2.increase_time();
	temp_3.increase_time();
	temp_4.increase_time();
	cout << "temp_1 = ";
	temp_1.printStandard();
	cout << "\ntemp_2 = ";
	temp_2.printStandard();
	cout << "\ntemp_3 = ";
	temp_3.printStandard();
	cout << "\ntemp_4 = ";
	temp_4.printStandard();

	return 0;
}