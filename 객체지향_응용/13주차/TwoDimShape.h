#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include"Shape.h"

class TwoDimensionShape :public Shape {// ���� base class ���� �Ļ�Ŭ������ 2�������� Ŭ���� ����
private:
	double first; //�ִ� �ΰ��� ������ ���� �� �� �����Ƿ� 2������ ���� �ΰ��� ���� ����
	double second;
public:
	TwoDimensionShape(double f, double s); //������
	void setFIrst(double f);
	void setSecond(double s); //�Ļ�Ŭ�������� ����ϱ����� get�Լ�,set�Լ�
	double getFirst();
	double getSecond();
	virtual double getArea(); //2���� �������� ���Ƕ�� ������ �����Ƿ� getArea�Լ��� �������̵�.
	// Shape�ڵ��� 2���������� �Ļ�Ŭ�������� ����Ű�� getVolume�� Shape�� getVolume�� ���
};

#endif // !TWODIMSHAPE_H
