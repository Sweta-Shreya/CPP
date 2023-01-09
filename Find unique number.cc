#include <iostream>
using namespace std;
int findUnique(int*arr,int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
}
int main(){
	int arr[7]={3,1,2,2,5,3,5};
	cout<<findUnique(arr,7)<<endl;
	return 0;
}




/*int main(){
	int arr[7]={2,3,2,8,5,3,5};
	int n=7;
	int count=1;
	int i=0;
	while(i<n){
		int j=i+1;
		while(j<n){
			if(arr[j]!=arr[i]){
				j++;
				count=1;
			}
			else{
				count++;
				break;
			}
		}
	}
	if(count<2){
		cout<<
	}
	
	
	
	
	
	
	
	
	
	
	/*for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int count=1;
			if(arr[i]==arr[j]){
				count++;
				break;	
			}
			else{
				cout<<arr[i];
			}
			
		}
	}
	
	return 0;
}

*/
