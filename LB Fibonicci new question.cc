#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int a = 0;
	int b = 1;
	
	cout<<a<<" "<<b<<" ";
	
		for(int i=1; ;i++){
			int sum = a + b;
			cout<<a + b<<" ";
			
			a=b;
			b=sum;
			if (n<=sum)
			break;
			}
		
		return 0;
	}
