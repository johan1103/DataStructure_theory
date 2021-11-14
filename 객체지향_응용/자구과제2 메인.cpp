#include<iostream>
#include"ArrayStack.h"

using namespace std;
int main() {
	// mtStack ����
	ArrayStack<int> myStack;

	cout << myStack.size() << "\n";
	
	myStack.push(1);
	myStack.push(2);

	cout << myStack.top() << "\n";
	myStack.pop();

	cout << myStack.top() << "\n";
	cout << myStack.size() << "\n";

	//myStack�� ���� á�� ��, ����ó���� Ȯ���� �� �ִ� try,catch ��
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

	//myStack�� ������� ��, ����ó���� Ȯ���� �� �ִ� try,catch ��
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

	//myStack�� ������� ��, ����ó���� Ȯ���� �� �ִ� try,catch ��
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