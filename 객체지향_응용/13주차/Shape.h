#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape { //���� �⺻�̵Ǵ� base class
private:
	double area; //��ǻ� �ǹ� ���� ��
public:
	Shape();
	virtual double getArea(); //������ ����� ���� virtual�Լ� ����
	virtual double getVolume(); //������ ����� ���� virtual�Լ� ����
};


#endif // !SHAPE_H
