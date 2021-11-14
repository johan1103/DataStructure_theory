#pragma once
#ifndef INCREMENT_H
#define INCREMENT_H

class Increment {
private:
	int count;
	const int increment;
public:
	Increment(int c = 0, int i = 1);
	void addIncrement();
	void print()const;
};


#endif // !INCREMENT_H
