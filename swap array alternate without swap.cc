#include <iostream>
using namespace std;//here any n can be taken need not to take n as size since its a different function it will b called differently,and while doing soits parameters eill be mentioned differently.so even if the parameters result the same no.different vairiables can be taken to avioid confusion.
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void swapArray(int arr[],int size){
	for(int i =0;i<size;i+=2){
		if(i+1<size){
			int temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}
}
int main(){
	int even[8]={1,4,6,10,5,22,9,7};
	int odd[5]={6,5,4,3,8};
	swapArray(even,8);
	printArray(even,8);
	return 0;
}
