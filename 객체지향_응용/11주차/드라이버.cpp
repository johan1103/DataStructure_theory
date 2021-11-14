#include"CheckingAccount.h"
#include"SavingAccount.h"
#include<iostream>
using namespace std;

int main() {
	CheckingAccount Acc_1(30000, 300);
	SavingAccount Acc_2(30000, 0.01);
	Account Acc_3(30000);
	Acc_1.debit(10000); 
	Acc_1.credit(15000); //이자까지 삭감해서 인출
	Acc_1.credit(100000); // 있는 금액 초과시 error 출력
	//각각의 계좌 금액 출력
	cout << "Acc_1 account = " << Acc_1.get_account() << "\n";
	cout << "Acc_2 account = " << Acc_2.get_account() << ", Acc_2 account's interest rate = "
		<< Acc_2.get_interest() << ", Acc_2 account's interest = "
		<< Acc_2.calculate_interest() << "\n"; // + Acc_2의 이자율,이자금액 출력
	cout << "Acc_3 account = " << Acc_3.get_account();
	return 0;
}