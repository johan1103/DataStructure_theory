#pragma once
#ifndef SAVING_ACCOUNT
#define SAVING_ACCOUNT

#include"Account.h"

class SavingAccount :public Account {
public:
	SavingAccount(const double account, const double itr); //account�� ��� �ް� ������ ������ ����� �߰�
	double calculate_interest(); //���� �޴� ���� ���
	void set_interest(const double itr); //������ ���� �Լ�
	double get_interest();
private:
	double interest;
};

#endif // !SAVING_ACCOUNT
