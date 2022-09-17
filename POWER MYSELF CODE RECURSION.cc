#include <iostream>
using namespace std;
int exp(int n){
	//base case
	if(n==0)
	return 1;
	
	int answer=2*exp(n-1);
	return answer;
}




int main(){
	int n;
	cout<<"enter the power for 2"<<endl;
	cin>>n;
	return 0;
	
}
