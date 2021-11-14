#include<iostream>
using std::cout;
using std::end;

#include"Time.h"

int main() {
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(12, 25, 42);
	Time t5(27, 74, 99);
	cout << "Constructed with:\n\nt1: all arguments defaulted\n";
	t1.printUniversal();
	t1.printStandard();

	cout << "\n\nt2: hour specified; minute and second defaulted\n";
	t2.printUniversal();
	t2.printStandard();

	cout << "\n\nt3: hour and minute specified; second defaulted\n";
	t3.printUniversal();
	t3.printStandard();

	cout << "\n\nt4: hour,minute specified;\n";
	t4.printUniversal();
	t4.printStandard();

	cout << "\n\nt5: all invalid values specified\n";
	t5.printUniversal();
	t5.printStandard();
}
