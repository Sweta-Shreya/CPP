#include <iostream>
using namespace std;

int leftOcc(int arr[],int n,int key){
	int s= 0,e= n-1;
	int mid=s+(e-s)/2;
	int ans= -1;
	while(s<=e){
		if(arr[mid]==key){
			ans = mid;
			e = mid-1;
		}
		else if(key>arr[mid]){
			s = mid +1;
		}
		else if(key<arr[mid]){
			e = mid -1;
		}
		mid = s + (e-s)/2;
		
	}
	return ans;
}

int rightOcc(int arr[],int n,int key){
	int s= 0,e= n-1;
	int mid=s+(e-s)/2;
	int ans= -1;
	while(s<=e){
		if(arr[mid]==key){
			ans = mid;
			s = mid +1;
		}
		else if(key>arr[mid]){
			s = mid +1;
		}
		else if(key<arr[mid]){
			e = mid -1;
		}
		mid = s + (e-s)/2;
		
	}
	return ans;
	
	
}
int main(){
	int arr[8]={1,2,3,3,3,3,3,5};
	cout<<"firstOcc of 3 at index "<< leftOcc(arr,8,3)<<endl;
	cout<<"lastOccof 3 at index"<<rightOcc(arr,8,3)<<endl;
	
	
	return 0;
}
