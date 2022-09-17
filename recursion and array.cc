#include <iostream>
using namespace std;
bool isSorted(int a[],int size){
	if (size == 0 || size == 1){
		return true;
	}
	if(a[0]>a[1]){
		return false;
	} 
	bool isSmallerSorted = isSorted(a+1,size-1);
	return isSmallerSorted;
	}
	 
	int main(){
		int a[10]={1,2,3,4,5,6,7,8,9,10};
		int size;
		cin>>size;
		cout<<isSorted(a,size);
		return 0;
	} 
