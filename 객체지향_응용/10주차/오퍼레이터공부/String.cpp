#include"String.h"

std::ostream& operator<<(std::ostream& output, const String& tmp) {
	// ��¿����� ����
	output << tmp.sentence;
	return output;
}
std::istream& operator>>(std::istream& input, String& tmp) {
	//�Է¿����� ����
	input >> tmp.sentence;
	return input;
}
String::String(string sen):sentence(sen) {
}

String::String(const String& a) {
	std::cout << "��������� " << &a << "\n";
	sentence = a.sentence;
}


String::~String() {

}
String& String::operator=(String a) {
	//���Կ����� ����
	this->sentence = a.sentence;
	return *this;
}
String& String::operator=(string a) {
	//�ٷ� ���ڿ� ������ ���� ���Կ����� �����ε�
	this->sentence = a;
	return *this;
}
/*
String operator+(String& a,String& b) {
	String tmp;
	std::cout << "+operator tmp :" << tmp.sentence << " " << &tmp << "\n";
	//+������ ����
	tmp.sentence = a.sentence + b.sentence;
	return tmp;
}
*/

String String:: operator+(String& a) {
	String tmp;
	tmp.sentence = a.sentence + this->sentence;
	return tmp;
}

void String::ex_fun(int a) {
	std::cout << "ex_fun " << a << "\n";
}