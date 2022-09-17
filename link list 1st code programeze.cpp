//not very appropriatae method of linklist
#include <iostream>
using namespace std;
class Node{
	public:
	int value;
	Node*next;
};
int main(){
	Node* head;
	Node *one = NULL;
	Node *two = NULL;
	Node *three = NULL;
	//allocating nodes in heap
	one = new Node();
	two = new Node();
	three = new Node();
	//assinging values 
	one->value = 1;
	two->value = 2;
	three->value = 3;
	//connecting 
	one->next= two;
	two->next= three;
	three->next=NULL;
	
	head = one;
	while(head!=NULL){
		cout<<head->value;
		head = head->next;
	}
	
	
}
