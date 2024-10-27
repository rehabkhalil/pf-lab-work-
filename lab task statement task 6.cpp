#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter your score(out of 100):";
	cin>>score;
	if(score>=90){
	cout<<"Grade A";
	}
	if(score>=80&&score<89){
	if(score>=85){
	cout<<"Grade:B+";
	}
	if(score<85){
    cout<<"Grade B";
    }
       
    } 
	if(score>70&&score<80){
	if(score>=75){
	cout<<"Grade C+";
}
	if(score<75){
	 cout<<"Grade C";
	  }
}
	   if(score>=60&&score<69){
		cout<<"Grade D";
	}
	if(score<60){
	cout<<"Grade F";
}
return 0;
	
}