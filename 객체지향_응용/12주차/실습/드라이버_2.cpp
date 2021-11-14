#include<iostream>
#include<iomanip>
using namespace std;
#include"BasePlusCommissionEmployee_CD.h"

int main() {
	cout << fixed << setprecision(2);
	{
		commissionEmployee employee1("Bob", 5000);
	}
	cout << "\n";
	BasePlusCommissionEmployee emplyee2("Lisa", 2000, 800);
	cout<<"\n";
	BasePlusCommissionEmployee emplyee3("Mark", 8000, 2000);
}