/*print if n=4
1
2 1
3 2 1
4 3 2 1
*/



#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int val=i;
		int j=1;
		while(j<=i){
			cout<<val;
			val--;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
