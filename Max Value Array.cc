#include<iostream>
using namespace std;
int getMax(int arr[],int n){//here arr was written initially
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}


int main(){
	int size;
	cout<<"enter the size"<<endl;
	cin>>size;
	int num[100];
	cout<<"enter the array"<<endl;
	for (int i=0;i<size;i++){
		cin>>num[i];
	//below lines were written abovecozof which code was not abale to run	
	}
	cout<<"max value is"<<getMax(num,size)<<" ";
	return 0;
}
