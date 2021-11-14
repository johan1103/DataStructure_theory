#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include"Shape.h"

class TwoDimensionShape :public Shape {// 가장 base class 다음 파생클래스인 2차원도형 클래스 선언
private:
	double first; //최대 두가지 변수가 존재 할 수 있으므로 2차원에 쓰일 두가지 변수 선언
	double second;
public:
	TwoDimensionShape(double f, double s); //생성자
	void setFIrst(double f);
	void setSecond(double s); //파생클래스에서 사용하기위한 get함수,set함수
	double getFirst();
	double getSecond();
	virtual double getArea(); //2차원 도형에는 부피라는 개념이 없으므로 getArea함수만 오버라이딩.
	// Shape핸들이 2차원도형의 파생클래스들을 가리키면 getVolume은 Shape의 getVolume을 사용
};

#endif // !TWODIMSHAPE_H
