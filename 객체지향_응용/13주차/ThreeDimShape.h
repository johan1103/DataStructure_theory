#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H
#include"Shape.h"

class ThreeDimensionShape :public Shape { //base class�� shape�� �Ļ�Ŭ������ 3�������� Ŭ����
private:
	double first; //�ִ� ������ 3���̹Ƿ� ���� 3�� ����
	double second;
	double third;
public:
	ThreeDimensionShape(double f, double s, double t);
	virtual double getArea(); // Area�� volume�� ���ϴ� ����� 2������ �ٸ��Ƿ� �������̵�&������ ���
	virtual double getVolume();
	void setFirst(double f); //�Ļ�Ŭ�������� 3���� �������� �̿��� ���ǿ� �ѳ��̸� ���ؾ� �ϹǷ�
	void setSecond(double s); //get�Լ�,set�Լ� ����,����
	void setThird(double t);
	double getFirst();
	double getSecond();
	double getThird();
};

#endif // !THREEDIMSHAPE_H