#include <iostream>
using namespace std;
int main(){
	int number,factorial = 1;
	cout<<"enter the number n"<<endl;
	cin>>number;
	
	if(number<0)
	cout<<"factorial cannot be found for negative number";
	else if(number<=1)
	cout<<factorial;
	else{
		for(int counter = number;counter>=2;counter--){
			factorial=factorial*counter;
			
		}
		cout<<number<<"!="<<factorial;
	}
	return 0;
}
