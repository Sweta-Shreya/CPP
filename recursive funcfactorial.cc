#include <iostream>
using namespace std;
int getFactorial(int n){
	//base case
	if(n<=1)
	return 1;
	
	//recursive calll
	int aage_ka_factorial = getFactorial(n-1);
	int answer=n*aage_ka_factorial;
	return answer;
	
}


int main(){
	int n;
	cout<<"enter the input value"<<endl;
	cin>>n;
	cout<<"value of"<<n<<"! is"<<getFactorial(n)<<endl;
}
