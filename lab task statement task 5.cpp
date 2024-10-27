#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"1 for MONDAY"<<endl;
	cout<<"2 for TUESDAY"<<endl;
	cout<<"3 for WEDNESDAY"<<endl;
	cout<<"4 for THURSDAY"<<endl;
	cout<<"5 for FRIDAY"<<endl;
	cout<<"6 for SATURDAY"<<endl;
	cout<<"7 for SUNDAY"<<endl;
	cout<<"Enter the number of your choice 1-7:";
	cin>>number;

	switch(number){
	case 1:
	cout<<"Start of the workweek";
	break;
	case 2:
	cout<<"It's Tuesday, stay productive.";
	break;
	case 3:
	cout<<"Midweek motivation!";
	break;
	case 4:
	cout<<"Almost the weekend.";
	break;
	case 5:
	cout<<"TGIF!";
	break;
	case 6:
	cout<<"Relax, it's Saturday.";
	break;
	case 7:
	cout<<"Enjoy your Sunday!";
	break;
	default:
	cout<< "Invalid day selection.";
	break;	
}
	return 0;
	}