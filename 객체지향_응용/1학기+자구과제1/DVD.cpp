#include"DVD.h"


//DVD�� ����ϴ� ������ license�� set�Լ��� ����, ������ ���ڴ� Media��ü �����ڷ� ����
DVD::DVD(string title, int length, string license) :Media(title, length) {
	this->license = license;
}
DVD::~DVD()
{
	//DVD��ü�� ����� �Ҹ��ߴ��� Ȯ�� ���� ��¹���
	cout << "DVD destructor\n";
}
//license���� ����,Ȯ�� �ϱ� ���� set,get�Լ�
void DVD::setLicense(string license) {
	this->license = license;
}
string DVD::getLicense() {
	return this->license;
}
//�������� ���� play�Լ� (�������̵�)
void DVD::play() {
	cout << "DVD";
}