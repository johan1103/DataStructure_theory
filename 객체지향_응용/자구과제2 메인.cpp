#include<iostream>
#include"ArrayStack.h"

using namespace std;
int main() {
	// mtStack 선언
	ArrayStack<int> myStack;

	cout << myStack.size() << "\n";
	
	myStack.push(1);
	myStack.push(2);

	cout << myStack.top() << "\n";
	myStack.pop();

	cout << myStack.top() << "\n";
	cout << myStack.size() << "\n";

	//myStack이 가득 찼을 때, 예외처리를 확인할 수 있는 try,catch 문
	try {
		while (true) {
			myStack.push(100);
		}
	}
	catch (StackEmptyException exception) {
		cout << exception.getMessage() << "\n";
	}
	catch (StackFullyException exception) {
		cout << exception.getMessage() << "\n";
	}

	//myStack이 비어있을 때, 예외처리를 확인할 수 있는 try,catch 문
	try {
		while (true) {
			myStack.pop();
		}
	}
	catch (StackEmptyException exception) {
		cout << exception.getMessage() << "\n";
	}
	catch (StackFullyException exception) {
		cout << exception.getMessage() << "\n";
	}

	//myStack이 비어있을 때, 예외처리를 확인할 수 있는 try,catch 문
	try {
		cout << myStack.top() << "\n";
	}
	catch (StackEmptyException exception) {
		cout << exception.getMessage() << "\n";
	}
	catch (StackFullyException exception) {
		cout << exception.getMessage() << "\n";
	}

	return 0;
}