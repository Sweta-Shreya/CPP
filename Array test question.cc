#include <iostream>

using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int arr[5];
    int size;
    cin>>size;
    
    for(int i = 0;i<5;i++){
        
        cin>>arr[i];
        
        
    }
    printarray(arr,size);
    
    for(int i = 0;i<size;i++){
    if(arr[i]<0) 
    {
    cout<<"negative"<<endl;
    cout<<arr[i]<<" "<<endl;
    }
    }
    
    for(int i =0;i<size;i++){
     if((arr[i]%2)==0){
        cout<<"even"<<endl;
        cout<<arr[i]<<" "<<endl;
        }
    }
    
    
    for(int i =0;i<size;i++){
    if((arr[i]%2)!=0){
        cout<<"odd"<<endl;
        cout<<arr[i]<<" "<<endl;
        }
    }
    
    
    for(int i =0;i<size;i++){
     if((arr[i]>0)){
        cout<<"positive"<<endl;
        cout<<arr[i]<<" "<<endl;
        }
    }
    
    return 0;
}
