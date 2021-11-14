#pragma once
#ifndef STRING_H
#define STRING_H
#include<iostream>
using std::string;

class String {
	// ���,�Է��� ���� >>,<<���۷����� friend����
	friend std::ostream& operator<<(std::ostream& output, const String& tmp);
	friend std::istream& operator>>(std::istream& input, String& tmp);
//	friend String operator+(String& a,String& b);
public:
	String(string sen=" "); //������
	String(const String& a);
	~String();
	String& operator=(String a); //���Կ�����
	String& operator=(string a); //���Կ�����
	String operator+(String& a);
	void ex_fun(int a);
private:
	string sentence;
};
//String operator+(String& a,String& b); //+������

#endif // !STRING_H
