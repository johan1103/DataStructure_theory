#include<iostream>
using namespace std;
#include"Stack.h"

int main() {
	Stack<double> doubleStack(5);
	double doubleValue = 1.1;

	cout << "Pushing elements onto doubleStack\n";

	while (doubleStack.push(doubleValue)) {
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\nStack is full. cannot push" << doubleValue
		<< "\n\nPopping elements from doubleStack\n";

	while (doubleStack.pop(doubleValue))
		cout << doubleValue << ' ';

	cout << "\nStack is empty. Cannot pop\n";

	Stack<int>intStack;
	int intValue = 1;

	while (intStack.push(intValue)) {
		cout << intValue << ' ';
		intValue++;
	}
	cout << "]nStack is full. Cannot push " << intValue <<
		"\n\nPopping elements from intStack\n";

	while (intStack.pop(intValue))
		cout << intValue << ' ';

	cout << "\nStack is empty.Cannot pop\n";
	return 0;
}