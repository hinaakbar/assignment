#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"please enter score"<<endl;
	cin >>score;
	if(score>=90)
	{
		cout<<"A"<<endl;
	}
	else if(score>=80||score>=90)
	{
		cout<<"B"<<endl;
	}
	else if(score>=70||score>=79)
	{
	 cout<<"c"<<endl;	
	}
	else if(score>=60||score>=69)
	{
	cout<<"d"<<endl;	
	}
	else
	{
	cout<<"f"<<endl;	
	}
	
		
	
}
