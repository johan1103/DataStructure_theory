#pragma once
#ifndef LEGALDVD_H
#define LEGALDVD_H

#include "DVD.h"

class LegalDVD:public DVD {
	//DVD 객체를 상속받음
public:
	//LegalDVD만 쓰는 멤버인 copyRight만 set으로 설정, 나머지 인자는 DVD생성자로 전달
	//생성자로 전달하는 부분의 코드는 cpp파일에서 정의
	LegalDVD(string title, int length, string license, string copyRight);
	~LegalDVD();
	//copyRight값을 설정, 확인하기 위한 set,get 함수
	void setCopyRight(string copyRight);
	string getCopyRight();
	//다형성을 위한 play함수 (오버라이딩)
	virtual void play();
private:
	string copyRight;
};

#endif // !LEGALDVD_H
