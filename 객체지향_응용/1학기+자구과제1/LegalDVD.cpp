#include"LegalDVD.h"

//LegalDVD�� ���� ����� copyRight�� set���� ����, ������ ���ڴ� DVD�����ڷ� ����
LegalDVD::LegalDVD(string title, int length, string license, string copyRight) :DVD(title, length, license) {
	setCopyRight(copyRight);
}
LegalDVD::~LegalDVD()
{
	// LegalDVD��ü�� ����� �Ҹ� �Ǿ����� Ȯ�� ���� ��¹���
	cout << "LegalDVD destructor\n";
}
//copyRight���� ����, Ȯ���ϱ� ���� set,get �Լ�
void LegalDVD::setCopyRight(string copyRight) {
	this->copyRight = copyRight;
}
string LegalDVD::getCopyRight() {
	return this->copyRight;
}
//�������� ���� play�Լ� (�������̵�)
void LegalDVD::play() {
	cout << "LegalDVD";
}