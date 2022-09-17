#include<iostream>
using namespace std;



class node{
	public:
	int data;
	node*next;
	//constructor
	node(int val){
		data=val;
		next= NULL;
	}	
};

void insertatTail(node *&head,int val){
	node*n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}

void display(node*head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertatHead(node*head,int val){
	node*n=new node(val);
	n->next=head;
	head=n;
}


int main(){
	node*head=NULL;
	insertatTail(head,1);
	insertatTail(head,2);
	insertatTail(head,3);
	insertatTail(head,4);
	insertatTail(head,5);
//	insertatHead(head,7);  why the expeccted result not declard?
	display(head);
	insertatHead(head,7); 
	display(head);
	return 0;
}
