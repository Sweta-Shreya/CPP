#include <iostream>
using namespace std;
int main(){
	float amount,discount,topay;
	cout<<"enter the amount\n";
	cin>>amount;
	if(amount<=100)
	cout<<"amount to pay"<<amount;
	else{
		if(amount>100 && amount<200){
			
				discount = (amount*5)/100;
				topay= amount - discount;
			
		}
		else if(amount>200 && amount<=400){
			discount = (amount*10)/100;
			topay = amount - discount;
		}
		else if(amount>400 && amount<=800){
			discount = (amount*20)/100;
			topay=amount - discount;
			
		}
		else{
			discount = (amount*25)/100;
			topay= amount - discount;
		}
		cout<<"amount to pay"<<topay;
	}
//cout<<endl;
return 0;
}

