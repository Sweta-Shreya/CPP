/*print if n=3
A B C 
B C D
C D E
*/


using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		char val='A'+i-1;
		int j=1;
		while(j<=n){
			cout<<val;
			val++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

