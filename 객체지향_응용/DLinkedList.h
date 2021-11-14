#ifndef DLINKEDLIST_H_
#define DLINKEDLIST_H_

#include<iostream>
#include<string>
using std::string;
using std::cout;
//typedef string Elem;

template<typename Object>
class DNode {
public:
	DNode() {
		elem = Object();
		prev = NULL;
		next = NULL;
	}
private:
	Object elem;
	DNode<Object>* prev;
	DNode<Object>* next;
	template<typename Object> friend class DLinkedList;
};


template<typename Object>
class DLinkedList {
public:
	DLinkedList() {
		header = new DNode<Object>;
		trailer = new DNode<Object>;
		header->next = trailer;
		trailer->prev = header;
		header->prev = NULL;
		trailer->prev = NULL;
	}
	~DLinkedList() {
		while (!empty()) {
			removeFront();
		}
	}
	bool empty() const {
		if (header->next == trailer)
			return true;
		else
			return false;
	}
	const Object& front() const {
		return header->next->elem;
	}
	const Object& back()const {
		return trailer->prev->elem;
	}
	void addFront(const Object& e) {
		DNode<Object>* tmp = new DNode<Object>;
		tmp->elem = e;
		tmp->next = header->next;
		tmp->prev = header;
		header->next->prev = tmp;
		header->next = tmp;
	}
	void addBack(const Object& e) {
		DNode<Object>* tmp = new DNode<Object>;
		tmp->elem = e;
		tmp->next = trailer;
		tmp->prev = trailer->prev;
		trailer->prev->next = tmp;
		trailer->prev = tmp;
	}
	void removeFront() {
		if (empty()) {
			cout << "array is empty! \n";
			return;
		}
		DNode<Object>* tmp = header->next;
		header->next = tmp->next;
		tmp->next->prev = header;
		delete tmp;
	}
	void removeBack() {
		if (empty()) {
			cout << "array is empty! \n";
			return;
		}
		DNode<Object>* tmp = trailer->prev;
		trailer->prev = tmp->prev;
		tmp->prev->next = trailer;
		delete tmp;
	}
	void printList() {
		DNode<Object>* nowPtr = header->next;
		int cnt = 1;
		while (!(nowPtr == trailer)) {
			cout << cnt << "." << nowPtr->elem << "  ";
			nowPtr = nowPtr->next;
			cnt++;
		}
	}
	Object& operator[](int size) {
		if (empty())
			return header->elem;
		DNode<Object>* nowPtr = header->next;
		while (size != 0) {
			if (nowPtr == trailer)
				return header->elem;
			nowPtr = nowPtr->next;
			size -= 1;
		}
		return nowPtr->elem;
	}

private:
	DNode<Object>* header;
	DNode<Object>* trailer;
protected:
	void add(DNode<Object>* v, const Object& e) {
		DNode<Object>* tmp = new DNode;
		tmp->elem = e;
		tmp->next = v;
		tmp->prev = v->prev;
		v->prev->next = tmp;
		v->prev = tmp;
	}
	void remove(DNode<Object>* v) {
		DNode<Object>* tmp = v->prev;
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		delete tmp;
	}
};


#endif