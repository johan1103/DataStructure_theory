#pragma once
#include<iostream>
using std::cout;
using std::cin;

#include<string>
using std::string;

int main() {
	string s1("happy");
	string s2("birthday");
	string s3;
	/*
	cout << s1 << " " << s2 << " " << s3 << "\n";
	cout << ((s2 == s1) ? "true" : "false") << "\n";
	cout << ((s2 != s1) ? "true" : "false") << "\n";
	cout << ((s2 > s1) ? "true" : "false") << "\n";
	cout << ((s2 < s1) ? "true" : "false") << "\n";
	cout << ((s2 >= s1) ? "true" : "false") << "\n";
	cout << ((s2 <= s1) ? "true" : "false") << "\n";
	string* s4Ptr = new string("Tae");
	cout << "\n*s4ptr=" << *s4Ptr << "\n\n";
	delete s4Ptr;
	*/
	s1 += s2;
	cout << s1 << "\n";
	return 0;

}