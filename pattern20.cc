/*print if n=4
   	*
   **
  *** 
 ****
 */
   




#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=(n-i)){
			cout<<" ";
			j++;
			
		}
		for(j>n-i;j<=n;j++){
			cout<<"*";
			
		
		  }
		  cout<<endl;
		  i++;
		}
		return 0;  
	}

