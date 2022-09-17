#include <iostream>
using namespace std;
void printspell(int n,string str[]){
	//base case
	if(n==0)
	return;
	//rcursion taking place
	printspell(n/10,str);
	//moving up in the tree thereby printing the value
	int number = n%10;
	cout<<str[number]<<" ";
	
	
	
}




int main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	 printspell(n,str);//do not declare the datatpe whiile callong a function
	return 0;
}
