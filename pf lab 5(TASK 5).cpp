#include<iostream>
using namespace std;
int main()
{
const int days=7;
double temp,sum=0,average;
 for(int i=0;i<days;i++){
 	cout<<"enter the temperature "<<i+1<<":";
cin>>temp;
sum=sum+temp;
}
average=sum/days;
cout<<"the average temperature of the week is:"<<average<<"C";
return 0;
}
