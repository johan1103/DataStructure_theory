#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>
using namespace std;

int main() {
	CheckingAccount Acc_1(30000, 300);
	SavingAccount Acc_2(30000, 0.01);
	Account Acc_3(30000);
	Acc_1.debit(10000); 
	Acc_1.credit(15000); //���ڱ��� �谨�ؼ� ����
	Acc_1.credit(100000); // �ִ� �ݾ� �ʰ��� error ���
	//������ ���� �ݾ� ���
	cout << "Acc_1 account = " << Acc_1.get_account() << "\n";
	cout << "Acc_2 account = " << Acc_2.get_account() << ", Acc_2 account's interest rate = "
		<< Acc_2.get_interest() << ", Acc_2 account's interest = "
		<< Acc_2.calculate_interest() << "\n"; // + Acc_2�� ������,���ڱݾ� ���
	cout << "Acc_3 account = " << Acc_3.get_account();
	return 0;
}