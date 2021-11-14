#include"CheckingAccount.h"


CheckingAccount::CheckingAccount(const double account, const double fee) :Account(account) {
	set_transaction(fee); //AccountŬ������ account�� �־��༭ �ʱ�ȭ�� ����ؼ� ������ ȣ��, set�Լ��� ������ ����
}
void CheckingAccount::set_transaction(double fee) {
	transaction = fee;
}
double CheckingAccount::get_transaction() {
	return transaction;
}
void CheckingAccount::credit(double output) {
	Account::credit(output + transaction); //���� credit�� ������ + ����ݾ��� ���ڷ� �޴� ���ο� credit �������̵�
}