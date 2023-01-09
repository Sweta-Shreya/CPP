#include <iostream>
using namespace std;
int summation(int size,int arr[]){
	int ans;
	// Base Case
	if(size==1){
		return arr[size];
		
	}
	else if(size<1){
		return 0;
	}
	
	//processing
	else{
		ans = arr[0]+arr[1];
	}
	summation(size-1,arr+1);
	return ans;
}

int main(){
	int arr[5]={2,4,5,6,9};
	int size = 5;
	void ans =summation(size,arr);
	cout<<ans;
	
}
