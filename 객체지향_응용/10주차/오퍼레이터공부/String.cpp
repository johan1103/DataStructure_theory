#include"String.h"

std::ostream& operator<<(std::ostream& output, const String& tmp) {
	// 출력연산자 구현
	output << tmp.sentence;
	return output;
}
std::istream& operator>>(std::istream& input, String& tmp) {
	//입력연산자 구현
	input >> tmp.sentence;
	return input;
}
String::String(string sen):sentence(sen) {
}

String::String(const String& a) {
	std::cout << "복사생성자 " << &a << "\n";
	sentence = a.sentence;
}


String::~String() {

}
String& String::operator=(String a) {
	//대입연산자 구현
	this->sentence = a.sentence;
	return *this;
}
String& String::operator=(string a) {
	//바로 문자열 대입을 위한 대입연산자 오버로딩
	this->sentence = a;
	return *this;
}
/*
String operator+(String& a,String& b) {
	String tmp;
	std::cout << "+operator tmp :" << tmp.sentence << " " << &tmp << "\n";
	//+연산자 구현
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