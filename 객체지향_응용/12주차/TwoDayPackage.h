#pragma once
#ifndef TWODAY_P_H
#define TWODAY_P_H
#include"Package.h"

class TwoDayPackage:public Package {
	// Package 상속받고, 요금에 영향을 줄 flatFee변수 추가
public:
	TwoDayPackage(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
		string s_s, string r_s, int s_Z, int r_Z, double w, double c, double f_fee);
	void set_flatFee(double f_fee);
	double get_cost();
	void print_package();
private:
	double flatFee;
};


#endif // !TWODAY_P_H
