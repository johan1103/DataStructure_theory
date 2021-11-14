#pragma once
#ifndef DVD_H
#define DVD_H

#include"Media.h"
using std::string;
using std::cout;
using std::cin;

class DVD:public Media {
	//Media��ü�� public������ ��ӹ���
public:
	//DVD�� ����ϴ� ������ license�� set�Լ��� ����, ������ ���ڴ� Media��ü �����ڷ� ����
	//�����ڷ� �����ϴ� �κ��� �ڵ�� cpp���Ͽ��� ����
	DVD(string title, int length, string license);
	~DVD();
	//license���� ����,Ȯ�� �ϱ� ���� set,get�Լ�
	void setLicense(string license);
	string getLicense();
	//�������� ���� play�Լ� (�������̵�)
	virtual void play();
private:
	string license;
};
#endif // !DVD
