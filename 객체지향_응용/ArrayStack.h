#pragma once
#ifndef ARRAYSTACK_H  //헤더 파일을 두번 이상 컴파일 하지 않기 위한 ifndef
#define ARRAYSTACK_H

#include<iostream>
#include<string>
using std::string;
using std::cout;

// StackEmptyException 과 StackFullyException을 위한 부모 클래스 RuntimeException
class RuntimeException {
private:
	// 두 클래스가 공통적으로 받게 될 errorMassage
	string errorMessage;
public:
	RuntimeException(const string& Msg) {
		errorMessage = Msg;
	}
	string getMessage()const {
		return errorMessage;
	}
};

class StackEmptyException :public RuntimeException {
public:
	StackEmptyException(const string& arr) :RuntimeException(arr) {
		// StackEmptyException 인스턴스가 제대로 생성되었는지 확인 위한 출력문
		cout << "StackEmpty exception called\n";
	}
};
class StackFullyException :public RuntimeException {
public:
	StackFullyException(const string& arr) :RuntimeException(arr) {
		// StackFullyException 인스턴스가 제대로 생성되었는지 확인 위한 출력문
		cout << "StackFully exception called\n";
	}
};



template <typename E>
class ArrayStack {
	//기본 용량 정의
	enum { DEF_CAPACITY = 100 };
public:
	//설정한 용량이 없을 때 기본으로 정의된 용량인 100으로 설정
	ArrayStack(int cap = DEF_CAPACITY):S(new E[cap]),capacity(cap),t(-1) {
		//인자로 받은 용량으로 E타입의 배열 Heap에 할당, capacity에 설정
		//생성했을 때에는 어떤 값도 넣지 않은 상태이기 때문에 현재 자료형의 크기를 알 수 있는 t값을 -1로 설정
	}
	~ArrayStack()
	{
		//Heap에 할당된 
		delete[] S;
	}
	int size()const {
		// 크기 값을 알려주는 t에 1을 더해서 실제 크기 반환
		return t + 1;
	}
	bool empty()const {
		//t가 -1일 때에는 아무것도 없고, 0이상이 되면 하나이상의 원소들이 push된 것이므로 0보다 작을
		//때에는 비어있다는 뜻이므로 t<0의 불값을 반환
		return t < 0;
	}
	const E& top()const throw(StackEmptyException) {
		// 자료형이 비어있을 때, 예외 객체를 throw 해주기 위해, StackEmptyException 전달
		if (empty())
			throw StackEmptyException("Top of empty stack.\n");
		//S[t]를 E& 로 별명을 반환
		return S[t];
	}
	void push(const E& e)throw(StackFullyException) {
		//자료형이 가득찬 상태 일때, 예외 객체를 throw 해주기 위해, StackFullyException 전달
		if (size() == capacity)
			throw StackFullyException("Push to full stack.\n");
		//현재 stack쌓인 위치를 지정하는 t값을 증가시킨후, 다음 배열의 위치에 e값 대입
		S[++t] = e;
	}
	void pop()throw(StackEmptyException) {
		//자료형이 비어 있을 때, 더이상 pop을 해주지 못하므로, StackEmptyException객체 throw
		if (empty())
			throw StackEmptyException("Pop from empty stack.\n");
		//값을 없애는게 아닌 t값을 1줄여 줌으로서, 기존의 top값을 쓰레기값처럼 취급
		--t;
	}

private:
	// 자료형이 들어갈 S 배열 E타입 포인터로 선언
	E* S;
	//총량을 뜻하는 capacity
	int capacity;
	//쌓인 스택의 현재위치를 알려주는 t
	int t;
};


#endif