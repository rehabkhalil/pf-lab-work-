#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"enter the number:";
	while(true){
		cin>>num;
		sum=sum+num;
		if(num<0){
			break;
		}
		sum=sum+num;
	}
		cout<<"total sum of all negative number:"<<sum;
		return 0;
}