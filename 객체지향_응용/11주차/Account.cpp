#include"Account.h"


Account::Account(double account) {
	set_account(account); //set �Լ��� �̿��ؼ� ��� ����
}

void Account::debit(double input) {
	set_account(get_account() + input); //get_account�� input�� �̿��ؼ� �ٽ� ��� ����
	// private�� �ᵵ ��������� �������� ���� get�Լ� ���
}
void Account::credit(double output) {
	if (get_account() - output < 0) { //�����Ϸ��� �ݾ��� ����� ���� ������ error�޼��� ���
		cout << "error!\n";
	}
	else
		set_account(get_account() - output); //����ݾ��� ����� ���� ������ ����, set�Լ��� ����� �ٽ� ����
}
void Account::set_account(const double account) {
	account_balance = account;
}
double Account::get_account() {
	return account_balance;
}