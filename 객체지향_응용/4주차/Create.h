#pragma once
#ifndef CREATE_H
#define CREATE_H
#include<string>
using std::string;

class CreateAndDestroy {
private:
	int objectId;
	string message;
public:
	CreateAndDestroy(int id, string msg);
	~CreateAndDestroy();
};


#endif // !CREATE_H
