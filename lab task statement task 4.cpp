#include<iostream>
using namespace std;
int main()
{
	char operation;
	double amount,finalamount;
	cout<<"Choose your operation which you want (deposit-D,withdraw-W,transfer-T):";
	cin>>operation;
	cout<<"Enter the amount";
	cin>>amount;
	switch(operation){
	case 'D':
	finalamount=amount-(0.5/100*amount);
	cout<<"total remaining balance after deposite:"<<finalamount;
	break;
	case 'W':
	finalamount=amount-(1.5/100*amount);
    cout<<"total remaining balance after withdraw:"<<finalamount;
    break;
    case 'T':
	finalamount=amount-(2.5/100*amount);
	cout<<"total remaining balance after transfer:"<<finalamount;
	break;
	default:
		cout<<"invalid operation";
	}
	return 0;
}

			
	
