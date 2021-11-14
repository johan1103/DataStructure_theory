#pragma once
#include<iostream>
//using namespace std;
template<typename T>
class Vector {
	friend Vector<T> operator-(const int& a, const Vector& tmp);
	friend Vector<T> operator-(const Vector& tmp, const int& a);
	friend std::ostream& operator<<(std::ostream& os, const Vector<T>& tmp);
	friend std::istream& operator>>(std::istream& is, Vector<T>& tmp);
private:
	T arr[100];
	int now_loc;
public:
	Vector() {
		for (int i = 0; i < 100; i++)
			arr[i] = 0;
		now_loc = 0;
	}
	void push_back(T num) {
		arr[now_loc] = num;
		now_loc += 1;
	}
	void pop_back() {
		if (now_loc > 0) {
			now_loc -= 1;
			arr[now_loc] = 0;
		}
	}
	Vector operator+(const Vector& tmp) {
		Vector result;
		for (int i = 0; i < std::max(this->now_loc, tmp.now_loc); i++) {
			result.arr[i] = this->arr[i] + tmp.arr[i];
		}
		result.now_loc = std::max(this->now_loc, tmp.now_loc);
		return result;
	}
	Vector& operator[](T num);
	void print() {
		for (int i = 0; i < this->now_loc; i++)
			std::cout << arr[i] << " ";
	}
};
template<typename T>
Vector<T>& Vector<T>::operator[](T num) {
	if (num < 0 || num >= now_loc)
		return arr[0];
	return arr[num];
}
template<typename T>
Vector<T> operator-(const int& a, const Vector<T>& tmp) {
	std::cout << "const int, vector operator called\n";
	Vector result;
	for (int i = 0; i < tmp.now_loc; i++) {
		result.arr[i] = tmp.arr[i] - a;
	}
	result.now_loc = tmp.now_loc;
	return result;
}

template<typename T>
Vector<T> operator-(const Vector<T>& tmp, const int& a) {
	std::cout << "vector, const int operator called\n";
	Vector result;
	for (int i = 0; i < tmp.now_loc; i++) {
		result.arr[i] = tmp.arr[i] - a;
	}
	result.now_loc = tmp.now_loc;
	return result;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& tmp) {
	os << "operator<< called\n";
	for (int i = 0; i < tmp.now_loc; i++) {
		os << tmp.arr[i] << " ";
	}
	return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, Vector<T>& tmp) {
	is >> tmp.arr[0];
	return is;
}