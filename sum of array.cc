#include <iostream>
using namespace std;
void func(int arr[],int n){
int sum;
for(int i=0;i<n;i++){
	cout<<arr[i];
	sum=sum+arr[i];
	
	
	}
	cout<<sum;
}
int main(){
	int size;
	cout<<"enter the size of the array"<<endl;
	
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		func(arr,size);	
	}
	
	return 0;
}


