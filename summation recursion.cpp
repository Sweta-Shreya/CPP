#include <iostream>
using namespace std;
int summation(int arr[],int size){
	int ans;
	// Base Case
	if(size==1){
		return arr[0];
		
		
	}
	 if(size==0){
		return 0;
	}
	
	//processing
		int remainingPart = summation(arr+1,size-1);
		ans = arr[0]+ remainingPart;
		
	
	
	return ans;
}

int main(){
	int arr[5]={2,4,5,1,8};
	int size = 5;
	int ans =summation(arr,size);
	cout<<ans;
	return 0;	
}
