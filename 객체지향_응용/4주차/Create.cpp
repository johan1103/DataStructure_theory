#include<iostream>
#include<string>
#include"Create.h"
using std::cout;
using std::cin;
using std::string;

CreateAndDestroy::CreateAndDestroy(int id, string msg) {
		objectId = id;
		message = msg;
		cout << "object" << objectId << " constructor runs " <<
			message << "\n";
	}
CreateAndDestroy::~CreateAndDestroy(){
		cout << (objectId == 1 || objectId == 6 ? "\n" : "");
		cout << "object" << objectId << " destructor runs " <<
			message << "\n";
	}