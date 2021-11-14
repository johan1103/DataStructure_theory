#include"Package.h"

Package::Package(string s_n, string r_n, string s_a, string r_a, string s_c, string r_c,
	string s_s, string r_s, int s_Z, int r_Z, double w, double c) {
	set_name(s_n, r_n);
	set_address(s_a, r_a);
	set_city(s_c, r_c);
	set_state(s_s, r_s);
	set_ZIP(s_Z, r_Z);
	set_weight(w);
	set_cost(c);
}
// 이름,주소,도시,상태,ZIP은 sendor recipient 둘다 가지고 있으므로
// 동시에 set
void Package::set_name(string s, string r) {
	s_name = s;
	r_name = r;
}
void Package::set_address(string s, string r) {
	s_address = s;
	r_address = r;
}
void Package::set_city(string s, string r) {
	s_city = s;
	r_city = r;
}
void Package::set_state(string s, string r) {
	s_state = s;
	r_state = r;
}
void Package::set_ZIP(int s, int r) {
	s_ZIP = s;
	r_ZIP = r;
}
void Package::set_weight(double w) {
	weight = w;
}
// 무게 return 함수
double Package::get_weight() {
	return weight;
}
// 총 드는 비용 = 무게*무게당 가격
void Package::set_cost(double c) {
	cost = c * weight;
}
// 총 비용 반환
double Package::get_cost() {
	return cost;
}
// 정보 출력
void Package::print_package() {
	cout << "Package information :\n";
	cout << "Sender's name :" << s_name << " Recipient's name : " << r_name << "\n"
		<< "Sender's address :" << s_address << " Recipient's address : " << r_address << "\n"
		<< "Sender's city :" << s_city << " Recipient's city : " << r_city << "\n"
		<< "Sender's state :" << s_state << " Recipient's state : " << r_state << "\n"
		<< "Sender's ZIP :" << s_ZIP << " Recipient's ZIP : " << r_ZIP << "\n";
	cout << "Weight : " << weight << " cost : " << get_cost() << "\n";
}