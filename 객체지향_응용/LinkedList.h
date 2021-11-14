#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

template<typename Object>
struct Node {
	Object& element;
	Node* next;

	Node(const Object& e = Object(), Node* n = NULL) :element(e), next(n) {

	}
};

template<typename Object>
class LinkedList {
	typedef Node<Object>* NodePtr;
private:
	NodePtr TOP;
	int size;
public:
	LinkedList() {
		TOP = NULL:
		size = 0;
	}
	int Size()const {
		return size;
	}
	bool isEmpty()const {
		if (size == 0)return 1;
		else return 0;
	}
	Object& top() {
		if (isEmpty() == true)
			return
			return TOP->element;
	}
	void push(Object newObject) {
		NodePtr tmp = new Node(newObject, TOP);
		TOP = tmp;
	}
};


#endif