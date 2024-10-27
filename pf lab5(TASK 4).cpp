#include<iostream>
using namespace std;
int main()
{
	int num,i=1,sum=0;
	cout<<"Enter a number:";
	cin>>num;
	while(i<=num){
	sum=sum+i;
	i+=2;
}
	cout<<"The sum of all odd number "<<num<<"is"<<sum;
}