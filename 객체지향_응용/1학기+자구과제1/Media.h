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
	// <<������ ���۷����� �����ε��� ���ؼ� friend ����
	friend ostream& operator<<(ostream& output, Media* me);
public:
	// Media Ŭ�������� �����ϴ� �� count�� static���� ����
	static int count;
	// Media Ŭ���� ������ ����
	Media(string title, int length);
	// �ڽ� ��ü���� delete�ϱ� ���� �Ҹ��� �������̵�
	virtual ~Media();
	// Media Ŭ������ ���� +������ �����ε�
	// main���� +�� ������� �����Ϳ� ���� �����ֹǷ� return�� ������ ��
	// ���ڶ��� ������������ �����Ƿ� ���� ���� ��������
	Media* operator+(const Media* m);
	//length �� title�� �����ϰ� Ȯ���� �� �ִ� set,get �Լ�
	void setLength(int length);
	int getLength();
	void setTitle(string title);
	string getTitle();
	// �������� ���� play �Լ� (virtual Ű���� ����),(�������̵�)
	virtual void play();
private:
	string title;
	int length;
};

#endif