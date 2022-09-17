#include <iostream>
using namespace std;//here any n can be taken need not to take n as size since its a different function it will b called differently,and while doing soits parameters eill be mentioned differently.so even if the parameters result the same no.different vairiables can be taken to avioid confusion.
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void swapArray(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap( arr[i], arr[i+1]);
		}
	}
}
int main(){
	int even[8]={2,4,5,6,8,9,10,3};
	int odd[5]={3,5,7,9,0};//u must not write arr here coz while calling the array u are using eben corresponding to 8 size,so name it even.
	
	swapArray(even,8);
	printArray(even,8);
	return 0;
}
