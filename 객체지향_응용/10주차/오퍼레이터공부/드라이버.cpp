#include"String.h"
using std::cin;
using std::cout;

int return_ab(int& a) {
	return a + 1;
}
int return_a(int& a) {
	return a;
}

int main() {
	
	String s1("one ");
	String s2("two ");
	String s3("three ");
	String s4("four ");
	String s5(s2 + s3);
	s1 = s4 + s5;
	s1 = s2 + s3 + s4;
	cout << &s1 << " " << &s2 << " " << &s3 << " " << &s4 << " " << &s5;
	/*
	int b = 1;
	int& a = b;
	cout << return_ab(a) << "\n"
		<< return_ab(b) << "\n"
		<< return_ab(return_a(a));
		*/
	return 0;
}