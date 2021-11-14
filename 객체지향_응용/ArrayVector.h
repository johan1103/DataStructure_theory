#ifndef ARRAYVECTOR_H_
#define ARRAYVECTOR_H_

#include<iostream>
#include<string>
using std::max;
using std::string;

class IndexOutOfBounds {
public:
	IndexOutOfBounds(string message = "IndexOutOfBounds") {
		msg = message;
	}
	string getMessage() {
		return msg;
	}
private:
	string msg;
};



template<typename Object>
class ArrayVector {
public:
	ArrayVector():capacity(0),n(0),A(NULL){}
	~ArrayVector() {
		delete[] A;
	}
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
	Object& at(int i) throw(IndexOutOfBounds) {
		if (i < 0 || i >= n) {
			throw IndexOutOfBounds();
		}
		return A[i];

	}
	void erase(int i = -1) {
		if (i == -1)
			i = n - 1;
		for (int j = i + 1; j < n; j++)
			A[j - 1] = A[j];
		n--;
	}
	void insert(const Object& e, int i = -1) {
		if (i == -1)
			i = n;
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
private:
	int capacity;
	int n;
	Object* A;
};




#endif