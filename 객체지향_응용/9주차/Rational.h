#pragma once
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H
#include<iostream>
using std::cin;
using std::cout;
class RationalNumber {
	friend std::ostream& operator<<(std::ostream&,const RationalNumber&);
	friend std::istream& operator>>(std::istream&, RationalNumber&);
	// friend �����Լ��� istream,ostream�� >>,<<�����ڸ� �����ε� ���־���.
public:
	RationalNumber(int = 0, int = 1);//������ ����& ���� ������ ������ ����Ʈ������ 0,1����
	RationalNumber operator+(const RationalNumber&); // addition
	RationalNumber operator-(const RationalNumber&); // subtraction
	RationalNumber operator*(const RationalNumber&); // multiplication
	RationalNumber operator/(RationalNumber&); // division

	// relational operators
	bool operator>(const RationalNumber&) const;
	bool operator<(const RationalNumber&) const;
	bool operator>=(const RationalNumber&) const;
	bool operator<=(const RationalNumber&) const;
	// equality operators
	bool operator==(const RationalNumber&) const;
	bool operator!=(const RationalNumber&) const;
	void printRational() const; // display rational number

	double change_to_double() const;
	//�Ҽ��� �ٲ��� ��Һ� �ϱ� ���� �м�->�Ҽ� ��ȯ �Լ�
private:
	int numerator; // private variable numerator
	int denominator; // private variable denominator
	void reduction(); // function for fraction reduction
}; // end class RationalNumber
#endif
