#include<iostream>
using namespace std;
int main()
{
string correctPassword="password123";
string userPassword;
const int maxattempt=3;
int i=0;
do{
cout<<"Enter your password:";
cin>>userPassword;
i++;
if(userPassword==correctPassword){
cout<<"Access Granted"<<endl;
}
else{
cout<<"Invalid Password"<<endl;
if(i<maxattempt)
cout<<"try again"<<endl;
}
}
while (i<maxattempt&&userPassword!=correctPassword);{
if(userPassword!=correctPassword){
cout<<"Access denied,You have used all attempt";
}
}
}
