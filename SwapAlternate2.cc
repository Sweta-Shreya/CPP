#include <iostream>
using namespace std;
void swapAlternate(int arr[],int n){
	n = 6;
	for(int i =0;i<=n-2;i+=2){
		
		
		int temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
		cout<<arr[i]<<" "<<arr[i+1]<<" ";
	}
	
	
}


int main(){
	int arr[6]={5,6,7,8,9,10};
	int n=6;
	swapAlternate(arr,6);
	return 0;
	
}
