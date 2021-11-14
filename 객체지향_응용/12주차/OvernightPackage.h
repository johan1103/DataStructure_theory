#pragma once
#ifndef OVERNIGHT_P_H
#define OVERNIGHT_P_H
#include"Package.h"

class OvernightPackage:public Package {
	// Package 클래스 상속받고, overnightFee변수 추가
public:
	OvernightPackage(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
		string s_s, string r_s, int s_Z, int r_Z, double w, double c, double o_fee);
	void set_overnightFee(double o_fee);
	double get_cost();
	void print_package();
private:
	double overnightFeePerOunce;
};

#endif // !OVERNIGHT_P_H
