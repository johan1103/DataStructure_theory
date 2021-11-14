#pragma once
#ifndef PACKAGE_H
#define PAXKAGE_H
#include <string>
#include<iostream>
using std::cout;
using std::string;

class Package {
public:
	// 각 멤버 변수 초기화
	Package(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
		string s_s, string r_s, int s_Z, int r_Z, double w, double c);
	void set_name(string s, string r);
	void set_address(string s, string r);
	void set_city(string s, string r);
	void set_state(string s, string r);
	void set_ZIP(int s, int r);
	void set_weight(double w);
	double get_weight();
	void set_cost(double c);
	double get_cost();
	void print_package();
private:
	string s_name;
	string s_address;
	string s_city;
	string s_state;
	int s_ZIP;
	string r_name;
	string r_address;
	string r_city;
	string r_state;
	int r_ZIP;
	double weight;
	double cost;
};

#endif // !PACKAGE_H
