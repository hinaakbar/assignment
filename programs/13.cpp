#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"please enter salary"<<endl;
	cin >>salary;
	if(salary>=20000)
	{
		salary=salary-7/100;
		cout<<salary<<endl;
	}
	else if(salary>=10000||salary<20000)
	{
		salary=salary-1000;
		cout<<salary<<endl;
	}
	else
	cout<<salary<<endl;
}
