/*print if n=4
A
BC
CDE
DEFG
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
