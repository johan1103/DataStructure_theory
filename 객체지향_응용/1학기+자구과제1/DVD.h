#pragma once
#ifndef DVD_H
#define DVD_H

#include"Media.h"
using std::string;
using std::cout;
using std::cin;

class DVD:public Media {
	//Media객체를 public형으로 상속받음
public:
	//DVD만 사용하는 변수인 license만 set함수로 설정, 나머지 인자는 Media객체 생성자로 전달
	//생성자로 전달하는 부분의 코드는 cpp파일에서 정의
	DVD(string title, int length, string license);
	~DVD();
	//license값을 설정,확인 하기 위한 set,get함수
	void setLicense(string license);
	string getLicense();
	//다형성을 위한 play함수 (오버라이딩)
	virtual void play();
private:
	string license;
};
#endif // !DVD
