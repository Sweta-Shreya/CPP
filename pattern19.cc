/* print if n=4
D
C D
B C D 
A B C D
*/



#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		char val='A'+n-i;
		int j=1;
		while(j<=i){
			cout<<val;
			val++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
