#include<iostream>
using namespace std;
int main()
{
	double area,length,width,perimeter;
	cout<<"Enter the length:";
	cin>>length;
	cout<<"Enter the width:";
	cin>>width;
	area=length*width;
	cout<<"Area is:"<<area<<endl;
	perimeter=2*(length+width);
	cout<<"Perimeter is:"<<perimeter;
	return 0;
}