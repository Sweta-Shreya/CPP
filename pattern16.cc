/*print if n=3
A
BB
CCC
*/


#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		char val='A'+i-1;
		char val='A';
		while(j<=i){
			cout<<val;
			j++;
			
		}
		cout<<endl;
	
		i++;
	}
	return 0;
}
