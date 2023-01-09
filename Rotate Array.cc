#include <iostream>
using namespace std;
void rotateArray(int arr[],int n,int k){
	int i =1;
	while(i<=n-k){
		arr[i+2]=arr[i];
		cout<<arr[i]<<" ";
		i++;
	}
	
}
int main(){
	int arr[5] ={1,7,9,11,12};
	rotateArray(arr,5,2);
	return 0;
}
