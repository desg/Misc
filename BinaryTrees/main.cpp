#include <iostream>
#include <unistd.h>
#include "Node.cpp"

using namespace std;

void printBackwards(Node *n){

	if( n->right == NULL) {
		cout<<  n->value << endl;
	}
	else{
		printBackwards(n->right);
		cout <<  n->value << endl;
		printBackwards(n->left);
	}
}

void printForwards(Node *n){

	if( n->left == NULL)
	{
		cout<< n->value << endl;
	}
	else{
	
	printForwards( n->left);
	cout << n-> value << endl;
	printForwards(n->right);

	}

}

int main(){

	Node root = Node(5);

	Node n1 = Node(3);
	Node n2 = Node(10);

	Node n3 = Node(2);
	Node n4 = Node(4);
	Node n5 = Node(7);
	Node n6 = Node(12);

	root.left = &n1;
	root.right = &n2;

	n1.left = &n3;
	n1.right = &n4;
	n2.left = &n5;
	n2.right = &n6;

	cout << "First printing in value reverse-order\n" << endl;
	printBackwards(&root);
	cout << "Now printing in order\n" << endl;
	printForwards(&root);
}
