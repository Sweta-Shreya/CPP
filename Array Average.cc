#include <iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sum =0;
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		
		 sum= sum+arr[i];	
	}
	
	cout<<sum<<endl;
	cout<<"printing average"<<endl;
	int avg=sum/(n);
	cout<<avg;
	
	return 0;
}
