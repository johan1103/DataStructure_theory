#include"VTR.h"

//�߰��� format���� set�Լ��� ����, ������ ���ڴ� Media�����ڷ� ����
VTR::VTR(string title, int length, string format) :Media(title, length) {
	setFormat(format);
}
VTR::~VTR()
{
	cout << "VTR destructor\n";
}
// Format���� ����,Ȯ���ϱ� ���� set,get �Լ�
void VTR::setFormat(string format) {
	this->format = format;
}
string VTR::getFormat() {
	return this->format;
}
// �������� ���� play �Լ� (�������̵�)
void VTR::play() {
	cout << "VTR";
}
