#include <iostream>
#include <unistd.h>
#include "Node.cpp"
#include <cstdlib>
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

void insertNode(Node *root, Node *n){

	if(n->value < root->value)
	{
		if(root->left == NULL){
			root->left = n;
		}
		else insertNode(root->left, n);
	}


	if(n->value > root->value)
	{
		if(root->right == NULL){
			root->right = n;
		}
	else insertNode(root->right, n);
	}
}

int main(){

	Node *root = new Node(5);


	Node *n1 = new Node(3);
	Node *n2 = new Node(10);
	
	for(int i = 0; i<5; i++){
	insertNode(root,new Node(i));
	}



	/*
	   cout << "First printing in value reverse-order\n" << endl;
	   printBackwards(root);
	   cout << "Now printing in order\n" << endl;
	   printForwards(root);
	 */

	//	cout << "Now we insert a node w/ value 15\n" << endl;
	//	Node n7 = Node(15);
	//	insertNode(&root, &n7);
		printForwards(root);

}
