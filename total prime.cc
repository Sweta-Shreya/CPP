#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int S,int E){
    int count=0;
    for(int i=S;i<=E;i++){
        
        for(int j=2;j<i;j++){
            if(i%j!=0){
                count=count+1;
            }
            else{
                count+=0;
            }
            return count;
            
        }
    }
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
