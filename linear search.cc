#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
	
}

int main(){
	int arr[10]={1,5,8,11,12,7,4,3,-4,8};
	cout<<"enter the key element"<<endl;
	int key;
	cin>>key;
	bool found=search(arr,10,key);
	if (found){
		cout<<"key is present"<<endl;}
		else{
			cout<<"key not found"<<endl;
		}
		return 0;
	}
