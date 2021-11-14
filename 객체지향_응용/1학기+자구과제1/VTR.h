#pragma once
#ifndef VTR_H
#define VTR_H

#include"Media.h"
using std::string;
using std::cout;
using std::cin;

class VTR :public Media{
	// Media ��ü�� public������ ��ӹ���
public:
	//�߰��� format���� set�Լ��� ����, ������ ���ڴ� Media�����ڷ� ����
	//�����ڷ� �����ϴ� �κ��� �ڵ�� cpp���Ͽ��� ����
	VTR(string title, int length, string format);
	~VTR();
	// Format���� ����,Ȯ���ϱ� ���� set,get �Լ�
	void setFormat(string format);
	string getFormat();
	// �������� ���� play �Լ� (�������̵�)
	virtual void play();

private:
	string format;
};

#endif