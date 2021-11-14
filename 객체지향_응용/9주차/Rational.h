#pragma once
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H
#include<iostream>
using std::cin;
using std::cout;
class RationalNumber {
	friend std::ostream& operator<<(std::ostream&,const RationalNumber&);
	friend std::istream& operator>>(std::istream&, RationalNumber&);
	// friend 전역함수로 istream,ostream의 >>,<<연산자를 오버로딩 해주었다.
public:
	RationalNumber(int = 0, int = 1);//생성자 정의& 값이 들어오지 않으면 디폴트값으로 0,1대입
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
	//소수로 바꾼후 대소비교 하기 위한 분수->소수 전환 함수
private:
	int numerator; // private variable numerator
	int denominator; // private variable denominator
	void reduction(); // function for fraction reduction
}; // end class RationalNumber
#endif
