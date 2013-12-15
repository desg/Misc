#include <iostream>
#include <unistd.h>

class Node{

public:
	Node(int);
	~Node();
	int value;
	Node *left;
	Node *right;
};

Node::Node(int v){
value = v;
left = NULL;
right = NULL;

}
Node::~Node(){

}
