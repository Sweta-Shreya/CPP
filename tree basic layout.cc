#include <iostream>
#include<vector>
using namespace std;
template<typename T>
class treeNode
{	public:
	T data;
	vector<treeNode<T>*>children;
	treeNode(T data){
		this->data=data;
		
	}
	
};
int main(){
	treeNode<int>*root = new treeNode(1);
	treeNode<int>*node1 = new treeNode(2);
	treeNode<int>*node2 = new treeNode(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
}

