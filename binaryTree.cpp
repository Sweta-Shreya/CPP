#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node*Left;
	Node*Right;
Node(int val){
	this->data=val;
	this->Left=NULL;
	this->Right=NULL;
	
}	
};




void inorder(Node*root){
	
	//base case
	if(root==NULL){
		return;
	}
	inorder(root->Left);
	cout<<root->data<<" ";
	inorder(root->Right);
	
	}
	

int main(){
	Node*root=new Node(1);
	root->Left=new Node(2);
	root->Right=new Node(3);
	root->Left->Left=new Node(4);
	root->Left->Right=new Node(5);
	root->Right->Left=new Node(6);
	root->Right->Right=new Node(7);
	inorder(root);
}
