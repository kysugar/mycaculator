#include<iostream>
using namespace std;
class AbsNode {
public:
	virtual int evaluate() = 0;
};
class BinNode:public AbsNode {
protected:
	BinNode*parent;
	BinNode*leftchild;
	BinNode*rightchild;
	char data;
public:
	BinNode(char data = '0', BinNode*parent=NULL)
	    :data(data),parent(parent) {
		leftchild = NULL;
		rightchild = NULL;
	}
	virtual int evaluate() = 0;
};
class ConstNode :public AbsNode {
protected:
	int data;
	ConstNode*parent;
public:
	ConstNode(int data = 0, ConstNode*parent = NULL)
		:data(data), parent(parent) {
	}
	int evaluate() {
		return data;
	}
};
class UnaryNode :public AbsNode {
protected:
	char data;
	UnaryNode*parent;
	UnaryNode*child;
public:
	UnaryNode(char data = '0', UnaryNode*parent = NULL, UnaryNode*child = NULL)
		:data(data), parent(parent), child(child) {
	}
	virtual int evaluate() = 0;
};
class Negtive :virtual public UnaryNode {
public:
	Negtive(UnaryNode*parent = NULL, UnaryNode*child = NULL)
		:UnaryNode('-', parent, child) {
	}
	int evaluate();
};
int Negtive::evaluate() {
	if (child == NULL) {

	}
}
