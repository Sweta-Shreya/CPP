# include <iostream>
using namespace std;
int main(){ 
int n;
cin>>n;
int i =1;
while(i<=n){
	int j =1;
	while(j<=n){
		cout<<"*";
		j = j+1;
	}
	cout<<endl;//otherwise all the stars would be printed in continuation
	i=i+1;
}
return 0;
}