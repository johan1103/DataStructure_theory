#pragma once
#ifndef VTR_H
#define VTR_H

#include"Media.h"
using std::string;
using std::cout;
using std::cin;

class VTR :public Media{
	// Media 객체를 public형으로 상속받음
public:
	//추가된 format값은 set함수로 설정, 나머지 인자는 Media생성자로 전달
	//생성자로 전달하는 부분의 코드는 cpp파일에서 정의
	VTR(string title, int length, string format);
	~VTR();
	// Format값을 설정,확인하기 위한 set,get 함수
	void setFormat(string format);
	string getFormat();
	// 다형성을 위한 play 함수 (오버라이딩)
	virtual void play();

private:
	string format;
};

#endif