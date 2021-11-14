#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape { //가장 기본이되는 base class
private:
	double area; //사실상 의미 없는 값
public:
	Shape();
	virtual double getArea(); //다형성 사용을 위한 virtual함수 선언
	virtual double getVolume(); //다형성 사용을 위한 virtual함수 선언
};


#endif // !SHAPE_H
