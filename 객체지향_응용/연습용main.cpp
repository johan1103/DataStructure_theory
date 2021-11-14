#include<iostream>
#include"ArrayStack.h"

using namespace std;
/*
int return_1(int number) {
	cout << "return_1 called\n";
	return number+100;
}


class except {
public:
	except(int a = 0) {
		cout << "except called \n";
		number = a;
	}
private:
	int number;
};

class temp {
public:
	temp(int num=0) {
		cout << "constructor called\n";
		number = num;
	}
	int plus()throw(except) {
		number += 1;
		if (number > 3) {
			cout << "throw!!!!!!!!!!!!\n";
			throw except(0);
		}
		cout << "plus called \n";
	}
	~temp()
	{
		cout << "deleted function called \n";
	}
private:
	int number;
};
*/
int main() {

	ArrayStack<int> myStack;
	myStack.push(1);

	cout << myStack.size() << "\n";

	/*
	temp t;
	try {
		t.plus();
		t.plus();
		t.plus();
		t.plus();
	}
	catch (except ex) {
		cout << "예외 처리\n";
	}
	*/
	return 0;
}