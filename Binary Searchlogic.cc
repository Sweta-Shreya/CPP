#include <iostream>
using namepsace std;

int binarySearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=((end-start)/2)start;
	while(start<=end){
	
	
	if(arr[mid]==key){
		return mid;
		
	}
	if(key>arr[mid]){
		start=mid+1;
	}
	else{
		end=mid-1;
		
	}
}
mid=((end-start)/2)start;
}
int main(){
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,8,11,14,16};
	int index=binarySearch(even,6,12);
	cout<<"index"<<index<<endl;
	return 0;
}
