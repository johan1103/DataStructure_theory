#pragma once
#ifndef ARRAYSTACK_H  //��� ������ �ι� �̻� ������ ���� �ʱ� ���� ifndef
#define ARRAYSTACK_H

#include<iostream>
#include<string>
using std::string;
using std::cout;

// StackEmptyException �� StackFullyException�� ���� �θ� Ŭ���� RuntimeException
class RuntimeException {
private:
	// �� Ŭ������ ���������� �ް� �� errorMassage
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
		// StackEmptyException �ν��Ͻ��� ����� �����Ǿ����� Ȯ�� ���� ��¹�
		cout << "StackEmpty exception called\n";
	}
};
class StackFullyException :public RuntimeException {
public:
	StackFullyException(const string& arr) :RuntimeException(arr) {
		// StackFullyException �ν��Ͻ��� ����� �����Ǿ����� Ȯ�� ���� ��¹�
		cout << "StackFully exception called\n";
	}
};



template <typename E>
class ArrayStack {
	//�⺻ �뷮 ����
	enum { DEF_CAPACITY = 100 };
public:
	//������ �뷮�� ���� �� �⺻���� ���ǵ� �뷮�� 100���� ����
	ArrayStack(int cap = DEF_CAPACITY):S(new E[cap]),capacity(cap),t(-1) {
		//���ڷ� ���� �뷮���� EŸ���� �迭 Heap�� �Ҵ�, capacity�� ����
		//�������� ������ � ���� ���� ���� �����̱� ������ ���� �ڷ����� ũ�⸦ �� �� �ִ� t���� -1�� ����
	}
	~ArrayStack()
	{
		//Heap�� �Ҵ�� 
		delete[] S;
	}
	int size()const {
		// ũ�� ���� �˷��ִ� t�� 1�� ���ؼ� ���� ũ�� ��ȯ
		return t + 1;
	}
	bool empty()const {
		//t�� -1�� ������ �ƹ��͵� ����, 0�̻��� �Ǹ� �ϳ��̻��� ���ҵ��� push�� ���̹Ƿ� 0���� ����
		//������ ����ִٴ� ���̹Ƿ� t<0�� �Ұ��� ��ȯ
		return t < 0;
	}
	const E& top()const throw(StackEmptyException) {
		// �ڷ����� ������� ��, ���� ��ü�� throw ���ֱ� ����, StackEmptyException ����
		if (empty())
			throw StackEmptyException("Top of empty stack.\n");
		//S[t]�� E& �� ������ ��ȯ
		return S[t];
	}
	void push(const E& e)throw(StackFullyException) {
		//�ڷ����� ������ ���� �϶�, ���� ��ü�� throw ���ֱ� ����, StackFullyException ����
		if (size() == capacity)
			throw StackFullyException("Push to full stack.\n");
		//���� stack���� ��ġ�� �����ϴ� t���� ������Ų��, ���� �迭�� ��ġ�� e�� ����
		S[++t] = e;
	}
	void pop()throw(StackEmptyException) {
		//�ڷ����� ��� ���� ��, ���̻� pop�� ������ ���ϹǷ�, StackEmptyException��ü throw
		if (empty())
			throw StackEmptyException("Pop from empty stack.\n");
		//���� ���ִ°� �ƴ� t���� 1�ٿ� �����μ�, ������ top���� �����Ⱚó�� ���
		--t;
	}

private:
	// �ڷ����� �� S �迭 EŸ�� �����ͷ� ����
	E* S;
	//�ѷ��� ���ϴ� capacity
	int capacity;
	//���� ������ ������ġ�� �˷��ִ� t
	int t;
};


#endif