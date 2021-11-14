#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using std::cout;
using std::cin;

class Account {
public:
	Account(double account);
	void set_account(const double account); //��� ����
	double get_account(); //��� ��ȯ
	void debit(double input); //����
	void credit(double output); //����
private:
	double account_balance; //�� ��� ��Ÿ���� account_balance
};

#endif // !ACCOUNT_H
