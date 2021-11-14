#include"TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
	string s_s, string r_s, int s_Z, int r_Z, double w, double c, double f_fee)
	:Package(s_n, r_n, s_a, r_a, s_c, r_c, s_s, r_s, s_Z, r_Z, w, c) {
	set_flatFee(f_fee);
}
void TwoDayPackage::set_flatFee(double f_fee) {
	flatFee = f_fee;
}
// �� ��뿡 �߰��ؾ� �ϹǷ� �� ����ȯ�Լ��� get_cost �������̵�
double TwoDayPackage::get_cost() {
	return Package::get_cost() + flatFee;
}
// ���� ��¿� ���� �߰��ϱ� ���� print_package�Լ� �������̵�
void TwoDayPackage::print_package() {
	Package::print_package();
	cout << "flat fee : " <<
		flatFee << " All cost (-flat fee) : " << get_cost() << "\n";
}