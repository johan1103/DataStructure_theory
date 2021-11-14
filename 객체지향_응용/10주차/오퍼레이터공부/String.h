#pragma once
#ifndef STRING_H
#define STRING_H
#include<iostream>
using std::string;

class String {
	// 출력,입력을 위한 >>,<<오퍼레이터 friend선언
	friend std::ostream& operator<<(std::ostream& output, const String& tmp);
	friend std::istream& operator>>(std::istream& input, String& tmp);
//	friend String operator+(String& a,String& b);
public:
	String(string sen=" "); //생성자
	String(const String& a);
	~String();
	String& operator=(String a); //대입연산자
	String& operator=(string a); //대입연산자
	String operator+(String& a);
	void ex_fun(int a);
private:
	string sentence;
};
//String operator+(String& a,String& b); //+연산자

#endif // !STRING_H
