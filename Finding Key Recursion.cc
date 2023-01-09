#include <iostream>
using namespace std;
/*

bool findKey(int arr[],int size,int key){

	
	//base case
	if(size==0){
		return false;
	}
	
	if(arr[0]==key){
		return true;
	}
	findKey(arr+1,size-1,key);
	return false;
}
int main(){
	int arr[6]={1,2,3,4,7,8};
	int size = 6;
	int key;
	cin>>key;
	bool ans =findKey(arr,size,key);
	if(ans){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	return 0;
}
*/
bool findKey(int arr[],int size,int key){

	
	//base case
	if(size==0){
		return false;
	}
	
	if(arr[0]==key){
		return true;
	}
	else{
	bool remaining = findKey(arr+1,size-1,key);
	return remaining;
	}
}
int main(){
	int arr[6]={1,2,3,4,7,8};
	int size = 6;
	int key;
	cin>>key;
	bool ans =findKey(arr,size,key);
	if(ans){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	return 0;
}
