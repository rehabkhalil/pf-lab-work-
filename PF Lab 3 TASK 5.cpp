#include<iostream>
using namespace std;
int main()
{
	int marks,sub1,sub2,sub3;
	float avgmarks;
	cout<<"Marks of sub1:";
	cin>>sub1;
		cout<<"Marks of sub2:";
		cin>>sub2;
			cout<<"Marks of sub3:";
			cin>>sub3;
		marks=sub1+sub2+sub3;
			avgmarks=marks/3;
			cout<<"avg is:"<<avgmarks<<endl;;
			if(avgmarks>=90)
			cout<<"Grade A";
			else if(avgmarks>=80)
				cout<<"Grade B";
					else if(avgmarks>=70)
						cout<<"Grade C";
						else if(avgmarks>=60)
						cout<<"Grade D";
							else if(avgmarks<60)
								cout<<"Grade F";
								return 0;
						
					
			
}