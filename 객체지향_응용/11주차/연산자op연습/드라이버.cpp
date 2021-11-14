#include<iostream>
#include"Array.h"
using namespace std;

int main() {
	Array arr;
	Array arr_1(4);
	arr_1[0] = 100;
	arr_1[1] = 99;
	arr_1[2] = 98;
	arr_1[3] = 97;
	arr = arr_1;
	arr.push_back(13);
	cout << arr.get_size() << " " << arr.get_length();
	Array arr_2(3);
	arr_2[0] = 1;
	arr_2[1] = 2;
	arr_2[2] = 3;
	Array arr_3;
	arr_3.push_back(1);
	arr_3.push_back(2);
	arr_3.push_back(3);

	for (int i = 0; i < arr.get_length(); i++)
		cout << "\n" << arr[i];
}