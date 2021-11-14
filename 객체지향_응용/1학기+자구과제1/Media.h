#pragma once
#ifndef MEDIA_H
#define MEDIA_H

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::istream;
using std::ostream;
using std::string;

class Media {
	// <<연산자 오퍼레이터 오버로딩을 위해서 friend 선언
	friend ostream& operator<<(ostream& output, Media* me);
public:
	// Media 클래스에서 공유하는 값 count를 static으로 선언
	static int count;
	// Media 클래스 생성자 선언
	Media(string title, int length);
	// 자식 객체까지 delete하기 위해 소멸자 오버라이딩
	virtual ~Media();
	// Media 클래스를 위한 +연산자 오버로딩
	// main에서 +한 결과값을 포인터에 대입 시켜주므로 return은 포인터 형
	// 인자또한 포인터형으로 받으므로 인자 또한 포인터형
	Media* operator+(const Media* m);
	//length 와 title을 설정하고 확인할 수 있는 set,get 함수
	void setLength(int length);
	int getLength();
	void setTitle(string title);
	string getTitle();
	// 다형성을 위한 play 함수 (virtual 키워드 선언),(오버라이딩)
	virtual void play();
private:
	string title;
	int length;
};

#endif