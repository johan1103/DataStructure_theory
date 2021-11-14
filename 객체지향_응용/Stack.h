#ifndef STACK_H_
#define STACK_H_

#include<iostream>
using std::max;

template<typename Object>
class Stack {
public:
	Stack() :capacity(0), n(0), A(NULL) {}
	int size()const {
		return n;
	}
	int getCapacity()const {
		return capacity;
	}
	bool empty()const {
		if (size() == 0)
			return true;
		else
			return false;
	}
	Object& operator[](int i) {
		return A[i];
	}
	Object& at(int i) {
		if (i < 0 || i >= n) {
			cout << "Index out of bounds\n";
			return A[0];
		}
		return A[i];

	}
	void erase(int i) {
		for (int j = i + 1; j < n; j++)
			A[j - 1] = A[j];
		n--;
	}
	void insert(const Object& e, int i) {
		if (n >= capacity)
			reserve(max(1, 2 * capacity));
		for (int j = n - 1; j >= i; j--)
			A[j + 1] = A[j];
		A[i] = e;
		n++;
	}
	void reserve(int N) {
		if (capacity >= N)return;
		Object* B = new Object[N];
		for (int j = 0; j < n; j++)
			B[j] = A[j];
		if (A != NULL)
			delete[] A;
		A = B;
		capacity = N;
	}
	void push_back(const Object& e) {
		insert(e, n);
	}
	void pop() {
		erase(n - 1);
	}
	Object back() {
		return A[n - 1];
	}
private:
	int capacity;
	int n;
	Object* A;
};


#endif
