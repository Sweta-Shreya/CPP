
#include <iostream>
using namespace std;

class bst{
	public:
	int data;
	bst *left, *right;
		
		bst(){
			data = 0;
			left = right = NULL;
		}
		
		bst(int value){
			data = value;
			left = right = NULL;
		}
		
		bst* insert(bst* root, int value){
			if(!root){
				return new bst(value);
			}
			
			if(value > root->data){
				root->right = insert(root->right, value);
			}
			else if(value < root->data){
				root->left = insert(root->left, value);
			}
			
			return root;
		}
		
		void inorder(bst* root){
			if(!root){
				return;
			}
			
			inorder(root->left);
			cout << root->data << " ";
			inorder(root->right);
		}
		
		void printInternal(bst* root){
			if(!root){
				return;
			}
			
			printInternal(root->left);
			if(root->left != NULL or root->right != NULL){
				cout << root->data << " ";
			}
			printInternal(root->right);
		}
		
};


int main() {
	bst* root = NULL;
	bst b;
	root = b.insert(root, 50);
	b.insert(root, 30);
	b.insert(root, 20);
	b.insert(root, 40);
	b.insert(root, 70);
	b.insert(root, 60);
	b.insert(root, 100);	
//	b.inorder(root);
	
	b.printInternal(root->left);
	b.printInternal(root->right);
	return 0;
}
