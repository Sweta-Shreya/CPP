#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;//u can return in ifstatement also 
			//here mid ia returned at the top int the loop if condition gets satisfied 
			//mid is retruned
		}
		//moving left or right
		if(key>arr[mid]){
		int start=mid+1;
	}
	else{
		int end=mid-1;
	}
		mid = (start+end)/2;
		
		}
	}

int main(){
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,8,11,14,16};
	int index=binarySearch(even,6,12);
	return 0;
	
}
