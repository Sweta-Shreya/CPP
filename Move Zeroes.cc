#include <iostream>
using namespace std;
void moveZeroes(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]==0){
			swap(arr[i],arr[i+1]);
		}
		cout<<arr[i]<<" ";
		
	}
	
	
}

int main(){
	int arr[7]={2,0,1,3,0,0,0};
	moveZeroes(arr,7);
	return 0;
}
