#include<vector>
#include"TwoDayPackage.h"
#include"OvernightPackage.h";
using std::cin;
using std::vector;

int main() {
	vector<Package*> packages(3);
	packages[0] = new Package("Lee", "Kwon", "452-5", "40-1", "incheon", "jeju", "arrived", "arrived"
		, 12181230, 21213235, 27.8, 1000);
	packages[1]=new TwoDayPackage("kim", "joe", "45-5", "96-4", "seoul", "busan", "arrived", "arrived"
		, 12181760, 12132921, 58.8, 100, 4000);
	packages[2] = new OvernightPackage("Lee", "Kwon", "452-5", "40-1", "incheon", "jeju", "arrived", "arrived"
		, 12181230, 21213235, 27.8, 1000, 5000);
	
	//print와 get cost를 가상함수로 정의해주었기 때문에 핸들링 가능
	for (int i = 0; i < packages.size(); i++) {
		packages[i]->print_package();
		cout << "\n";
	}

	for (int i = 0; i < packages.size(); i++) {
		delete packages[i];
	}
	return 0;
}