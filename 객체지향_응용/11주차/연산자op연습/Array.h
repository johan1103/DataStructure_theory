#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using std::cin;
using std::cout;
using std::istream;
class Array {
	friend istream& operator<<(istream& input, Array&);
	friend std::ostream operator>>(ostream& output, const Array&);
public:
	Array(int arr_size = 0) {
		if (arr_size == 0) {
			length = 0;
			arr_size = 1;
		}
		else
			length = arr_size;
		arr = new int[arr_size];
		size = arr_size;
		for (int i = 0; i < arr_size; i++)
			arr[i] = 0;
	}
	Array(const Array& a) {
		if (a.length != this->length) {
			delete[]arr;
			this->length = a.length;
			arr = new int[length];
			size = length;
		}
		for (int i = 0; i < length; i++)
			arr[i] = a[i];
	}
	~Array()
	{
		delete[]arr;
	}
	bool operator==(const Array& arr_tmp) {
		if (this->length != arr_tmp.length)
			return false;
		else
			for (int i = 0; i < length; i++)
				if (arr[i] != arr_tmp.arr[i])
					return false;
		return true;
	}
	bool operator!=(const Array& arr_tmp) {
		bool result = (*this == arr_tmp);
		if (result == true)
			return false;
		else
			return true;
	}
	int& operator[](int num) {
		int result = (num >= length || num < 0) ? -100 : num;
		return arr[num];
	}
	int operator[](int num)const {
		int result = (num >= length || num < 0) ? -100 : arr[num];
		return result;
	}
	Array& operator=(const Array& a) {
		if (a.length != this->length) {
			delete[]arr;
			arr = new int[a.length];
			this->length = a.length;
			this->size = a.length;
		}
		for (int i = 0; i < length; i++)
			arr[i] = a[i];
		return *this;
	}
	void push_back(int num) {
		if (length >= size) {
			int* tmp = new int[size * 2];
			for (int i = 0; i < size; i++)
				tmp[i] = arr[i];
			size *= 2;
			delete[]arr;
			arr = tmp;
		}
		arr[length] = num;
		length += 1;
	}
	int get_size() {
		return size;
	}
	int get_length() {
		return length;
	}
	
private:
	int* arr;
	int size;
	int length;
};

#endif // !ARRAY_H
