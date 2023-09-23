#include<iostream>
using namespace std;
int main()
{
	int salary;
	char g;
	float bonus;
	cout<<"please enter salary"<<endl;
	cin >>salary;
	cout<<"please enter grade"<<endl;
	cin >>g;
	cout<<"please enter bonus"<<endl;
	cin>>bonus;
	if(g>50)
	{
	
	
		bonus=salary*50.0/100.0;
		salary=salary+bonus;
		cout<<salary<<endl;
	}
	
	 else
	{
	
		bonus=salary*25.0/100.0;
	salary=salary+bonus;
	cout<<salary<<endl;
}
return 0;

}
