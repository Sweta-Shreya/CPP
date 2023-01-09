/*#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits(int n){
	unsigned int counting=0;
    while(n){
        
        counting+=n^0;
        n>>=1;
    }
    return counting;
}

int main() {
    int n;
    cin>> n;
    cout<<countBits(n);
    return 0;
}*/
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

/*int countBits(int n){
    int counting=0;
    while(n!=0){
        if(n^0){
            counting++;
        }
    
        n>>=1;
    }
    return counting;
}
*/
unsigned int countBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    cin>> n;
    cout<<countBits(n);
    return 0;
}
