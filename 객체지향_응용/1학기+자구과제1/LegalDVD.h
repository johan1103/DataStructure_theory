#pragma once
#ifndef LEGALDVD_H
#define LEGALDVD_H

#include "DVD.h"

class LegalDVD:public DVD {
	//DVD ��ü�� ��ӹ���
public:
	//LegalDVD�� ���� ����� copyRight�� set���� ����, ������ ���ڴ� DVD�����ڷ� ����
	//�����ڷ� �����ϴ� �κ��� �ڵ�� cpp���Ͽ��� ����
	LegalDVD(string title, int length, string license, string copyRight);
	~LegalDVD();
	//copyRight���� ����, Ȯ���ϱ� ���� set,get �Լ�
	void setCopyRight(string copyRight);
	string getCopyRight();
	//�������� ���� play�Լ� (�������̵�)
	virtual void play();
private:
	string copyRight;
};

#endif // !LEGALDVD_H
