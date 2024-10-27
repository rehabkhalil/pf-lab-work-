#include<iostream>
using namespace std;
int main()
{
	double initialB,withdraw;
	cout<<"Enter the initial balance:";
	cin>>initialB;
	while(true){
		cout<<"Enter withdraw amount (0 to exit)"<<endl;
		cin>>withdraw;
		if(withdraw==0){
			cout<<"existing ATM"<<endl;
		break;
		}
		else if(withdraw>initialB){
			cout<<"Balance is Insufficient"<<endl;
		}
		else{
			initialB-=withdraw;
			cout<<"withdraw successful the remaining balance is:"<<initialB<<endl;
		}
	}
		cout<<"ThankYou for using it";
		
}
