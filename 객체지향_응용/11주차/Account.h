#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using std::cout;
using std::cin;

class Account {
public:
	Account(double account);
	void set_account(const double account); //재고 설정
	double get_account(); //재고 반환
	void debit(double input); //적립
	void credit(double output); //인출
private:
	double account_balance; //현 재고를 나타내는 account_balance
};

#endif // !ACCOUNT_H
