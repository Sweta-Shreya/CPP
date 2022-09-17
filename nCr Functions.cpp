#include <iostream>
using namespace std;
int factorial(int n){
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}
	return factorial;
}

int nCr(int n,int r){
	int num = factorial(n);
	int denom = factorial(n-r);
	int num2 = factorial(r);
	return num/(denom*num2);
}

int main(){
	int n,r;
	cin>>n;	
	cout<<n<<endl;
	cin>>r;
	cout<<r<<endl;
	cout<<nCr(n,r)<<endl;
	return 0;
}
