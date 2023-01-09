#include <iostream>
#include <vector>
using namespace std;
//here this function is a vector function since it needs to be stored like in an array
vector<int>reverse(vector<int>v){
	int s = 0;
	int e = v.size()-1;
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
		
	}
	return v;
}
//since print is a function which doesnot need to store any thing in vctor form hence it is not written in vector form
void print(vector<int>v){
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" "<<endl;
	}
}
int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(7);
	v.push_back(11);
	v.push_back(17);
	vector<int>ans=reverse(v);
	print(ans);
	return 0;
	
	 }

