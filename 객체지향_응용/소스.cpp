#include<iomanip>
using std::setprecision;
using std::fixed;
#include"BasePlusCommissionEmployee.h";
#include"Vector.h"
using std::cout;
/*
BasePlusCommissionEmployee employee_3(
	"Lee", "Jones", "222-22-2222", 10000, .06, 0.01);
	*/
int main() {
	/*
	commissionEmployee employee(
		"Sue", "Jones", "222-22-2222", 10000, .06);
	static BasePlusCommissionEmployee employee_1(
		"Tae", "Jones", "222-22-2222", 10000, .06, 0.01);
	*/
	/*
	BasePlusCommissionEmployee employee_2(
		"Joe", "Jones", "222-22-2222", 10000, .06, 0.01);
		*/
	Vector<int> a;
	Vector<int> b;
	b.push_back(3);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
//	a[0] = int(3);
	cout << a[0] << "\n";
	a.print();
	
	return 0;
}