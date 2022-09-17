#include <iostream>
using namespace std;
int main{
	int exp(int n)
	{
	//fast exponentiation
	if(n==0)
	return 1;
	//odd
	int chhota_answer=exp(n/2);
	if((n%2)==0){
	return chhota_answer*chhota_answer;
	
	}
	else{
	//even
	return 2*chhota_answer*chhota_answer;
	}
	}
	
	int exptwo(int n){
	if(n==0)
	return 1;
	int ans= 2*expTwo(n-1);
	cout<<"for n"<<n<<"ans"<<ans<<endl;
	return ans;
	}
}
