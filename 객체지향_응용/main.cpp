#define INF 1e9
#define MAX 1000
#include<iostream>
#include<string>
#include"DLinkedList.h"
#include"ArrayVector.h"
#include"Stack.h"
#include<vector>

using namespace std;

void solveStockSpan(Stack<int> stockArr) {
	Stack<pair<int, int>> analysis;
	int result[MAX] = { 0 };
	result[0] = 1;
	int size = stockArr.size();
	int back = stockArr.back();
	stockArr.pop();
	int back_size = stockArr.size();
	int cnt = 1;
	analysis.push_back({ back,back_size });
	while (!stockArr.empty()) {
		back = stockArr.back();
		stockArr.pop();
		back_size = stockArr.size();
		while (true) {
			if (back >= analysis.back().first) {
				result[analysis.back().second] = analysis.back().second - back_size;
				analysis.pop();
			}
			else {
				analysis.push_back({back, back_size});
				break;
			}
		}
		cnt++;
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
		cout << result[i] << " ";
	cout << "\n";
	return;
}

void solveOperatorProblem() {
	//중위,후위 연산자 변환
	Stack<pair<char, int>> sen;
	cout << "중위 연산자 입력 ";
	string tmp;
	cin >> tmp;
	for (int i = tmp.size() - 1; i >= 0; i--) {
		if (tmp[i] == '*' || tmp[i] == '/')
			sen.push_back({ tmp[i],3 });
		else if (tmp[i] == '+' || tmp[i] == '-')
			sen.push_back({ tmp[i],2 });
		else if (tmp[i] == '(' || tmp[i] == ')')
			sen.push_back({ tmp[i],100 });
		else
			sen.push_back({ tmp[i],-1 });
	}
	Stack<char> result;
	Stack<pair<char, int>> operatorStack;
	char element = sen.back().first;
	int priority = sen.back().second;
	sen.pop();
	if (priority == -1)
		result.push_back(element);
	while (!sen.empty()) {
		element = sen.back().first;
		priority = sen.back().second;
		sen.pop();
		if (priority == -1) {
			result.push_back(element);
			continue;
		}
		if (operatorStack.empty()) {
			if (element == '(')
				operatorStack.push_back({ element,0 });
			else
				operatorStack.push_back({ element,priority });
			continue;
		}
		if ((operatorStack.back().second > priority)||(element==')')) {
			while (true) {
				char tempOperator = operatorStack.back().first;
				if (tempOperator != '(' && tempOperator != ')')
					result.push_back(tempOperator);
				operatorStack.pop();
				if (operatorStack.back().first == '(') {
					if(element==')')
						operatorStack.pop();
					cout << operatorStack.back().first << " " << operatorStack.back().second << "\n";
					cout << "( detected\n";
					break;
				}
				if (operatorStack.empty()) {
					cout << "empty detected\n";
					break;
				}
			}
			if (element != ')')
				operatorStack.push_back({ element,priority });
		}
		else {
			if (element == '(')
				operatorStack.push_back({ element,0 });
			else
				operatorStack.push_back({ element,priority });
		}
//		for (int i = 0; i < operatorStack.size(); i++)
//			cout << operatorStack[i].first << "," << operatorStack[i].second << " ";
//		cout << "\n";
	}
	while (!operatorStack.empty()) {
		char tempOperator = operatorStack.back().first;
		if (tempOperator != '(' && tempOperator != ')')
			result.push_back(tempOperator);
		operatorStack.pop();
	}
	cout << "result\n";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";

}


int main() {

	// doubly linked list
	DLinkedList<int> LinkedArr;
	LinkedArr.addFront(5);
	LinkedArr.addFront(4);
	LinkedArr.addFront(3);
	LinkedArr.addFront(2);
	LinkedArr.addFront(1);
	LinkedArr.addBack(100);
	LinkedArr.addBack(101);
	LinkedArr.addBack(102);
	LinkedArr.addBack(103);
	LinkedArr.removeBack();
	LinkedArr.removeFront();
	LinkedArr.printList();
	cout << "\n";


	//array vector
	ArrayVector<int> ArrayVec;
	for (int i = 0; i < 4; i++) {
		ArrayVec.insert(i);
	}
	try {
		int tempIndex = 0;
		while (true) {
			cout << tempIndex << ": " << ArrayVec.at(tempIndex) << "\n";
			tempIndex++;
		}
	}
	catch (IndexOutOfBounds exception) {
		cout << exception.getMessage() << "\n";
		while (!ArrayVec.empty()) {
			ArrayVec.erase();
		}
	}
	ArrayVec.insert(1999);
	cout << "현재 capacity :" << ArrayVec.getCapacity() << "\n";
	ArrayVec.insert(11);
	ArrayVec.insert(3);
	cout << "현재 capacity :" << ArrayVec.getCapacity() << "\n";
	ArrayVec.insert(1000256);
	ArrayVec.erase();
	for (int i = 0; i < ArrayVec.size(); i++)
		cout << i << "번째: " << ArrayVec[i] << " ";


	//stock span algorithm
	Stack<int> stock;
	stock.push_back(9);
	stock.push_back(5);
	stock.push_back(1);
	stock.push_back(3);
	stock.push_back(1);
	stock.push_back(4);
	stock.push_back(7);
	stock.push_back(8);
	stock.push_back(9);

	solveStockSpan(stock);
	solveOperatorProblem();
	
	return 0;
}