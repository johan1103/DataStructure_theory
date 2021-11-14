#include"OvernightPackage.h"

OvernightPackage::OvernightPackage(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
	string s_s, string r_s, int s_Z, int r_Z, double w, double c, double o_fee)
	:Package(s_n, r_n, s_a, r_a, s_c, r_c, s_s, r_s, s_Z, r_Z, w, c) {
	set_overnightFee(o_fee);
}
void OvernightPackage::set_overnightFee(double o_fee) {
	overnightFeePerOunce = o_fee;
}
// �� ��ȯ��� ������ ���� get_cost�Լ� �������̵�
double OvernightPackage::get_cost() {
	return Package::get_cost() + overnightFeePerOunce;
}
// ��� ���뿡 overnightFee ��� �߰��� �� �ݾ� ������� 
// print_package �Լ� �������̵�
void OvernightPackage::print_package() {
	Package::print_package();
	cout << "overnight fee : " << overnightFeePerOunce
		<< " All cost (-overnight fee) : " << get_cost() << "\n";
}