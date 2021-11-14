#pragma once
#ifndef CHECKING_ACCOUNT
#define CHECKING_ACCOUNT
#include"Account.h"

class CheckingAccount:public Account {
public:
	CheckingAccount(const double account, const double fee); //Account�� ��ӹް� ������ �����͸���� �߰�
	void set_transaction(double fee); //������ ���� �Լ�
	double get_transaction(); //������ ��ȯ �Լ�
	void credit(double output); // ������ ���� �����Ḧ �ٿ��� �ϹǷ� �Լ� �������̵�
private:
	double transaction; //��ӹ��� ����� �̿ܿ� ����� ������ ������� �߰�
};

#endif // !CHECKING_ACCOUNT
