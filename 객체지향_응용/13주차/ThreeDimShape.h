#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H
#include"Shape.h"

class ThreeDimensionShape :public Shape { //base class인 shape의 파생클래스인 3차원도형 클래스
private:
	double first; //최대 변수가 3개이므로 변수 3개 선언
	double second;
	double third;
public:
	ThreeDimensionShape(double f, double s, double t);
	virtual double getArea(); // Area와 volume을 구하는 방식이 2차원과 다르므로 오버라이딩&다형성 사용
	virtual double getVolume();
	void setFirst(double f); //파생클래스에서 3개의 변수들을 이용해 부피와 겉넓이를 구해야 하므로
	void setSecond(double s); //get함수,set함수 선언,정의
	void setThird(double t);
	double getFirst();
	double getSecond();
	double getThird();
};

#endif // !THREEDIMSHAPE_H