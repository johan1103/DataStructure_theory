#include"SavingAccount.h"


SavingAccount::SavingAccount(const double account, const double interest) :Account(account) {
	set_interest(interest); //�ʱ�ȭ��� Account������ ȣ�� �� ������ �����Լ� ȣ��
}
double SavingAccount::calculate_interest() {
	return get_account() * get_interest(); //get�Լ��� ���� ����,������ �޾Ƽ� ���Ѱ� return (return��= ����)
}
void SavingAccount::set_interest(const double itr) {
	interest = itr; //������ �����Լ�
}
double SavingAccount::get_interest() {
	return interest;
}