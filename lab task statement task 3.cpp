#include<iostream>
using namespace std;
int main()
{
char op;
int num1,num2;
cout<<"Enter the operation:";
cin>>op;
cout<<"Enter two numbers:";
cin>>num1>>num2;
switch(op){
	case '+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
			case '-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
			case '*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
		case '/':
			if(num2!=0)
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			else
			cout<<"undefined";
			break;
			default:
			cout<<"wrong operation";
			break;
}
return 0;
}	