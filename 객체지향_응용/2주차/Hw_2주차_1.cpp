#include<iostream>
using namespace std;

class bank_account {
private:
	// �� ���
	int current_balance;
public:
	// ������
	bank_account(int initial_balance) {
		current_balance = initial_balance;
	}
	// ������ �����ε� -> �μ��� ���� �ʾ��� ���� ����Ʈ ��
	bank_account() {
		current_balance = 0;
	}
	// �� ��� ���Է�
	void set_initial_balance(int initial_balance) {
		if (initial_balance < 0) {
			cout << "error! (wrong value)\n";
			current_balance = 0;
		}
		else {
			current_balance = initial_balance;
		}
		return;
	}
	// ���� int ������ �ް�, ��� �߰� & ���� ���� 0���� ������ �۵� X
	void credit(int given_money) {
		if (given_money <= 0)
			cout << "error! (wrong value)\n";
		else {
			current_balance += given_money;
		}
		return;
	}
	// ������ ���� int ������ �ް�, ����� �谨 & ����� ������ ���� ������ �۵�X
	void debit(int withdraw_money) {
		if (withdraw_money > current_balance) {
			cout << "Debit amount exceeded account balance.\n";
		}
		else {
			current_balance -= withdraw_money;
		}
	}
	// ����� ���
	int get_current_balance() {
		return current_balance;
	}
};

int main() {
	// ���� 2�� ����, ù��°�� ���� 0, �ι�° ���� 10���� �����ڿ� ���� ������
	bank_account account_1;
	bank_account account_2(10);
	// ���� �Լ��� ���� ���� 50,35�� ��� �缳��
	cout << "account_1 balance = 50\n";
	account_1.set_initial_balance(50);
	cout << "account_2 balance = 35\n";
	account_2.set_initial_balance(35);
	// 60, 20 ���� 60�� ��� �Ѵ� ���̹Ƿ� ������� ����
	cout << "1's withdraw 60\n";
	account_1.debit(60);
	cout << "1's withdraw 20\n";
	account_1.debit(20);
	// ����� ���
	cout << "account1's current balance: " << account_1.get_current_balance() << "\n";
	cout << "2's credit 20\n";
	cout << "account2's current balance: " << account_2.get_current_balance() << "\n";

	return 0;
}