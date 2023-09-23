#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"please enter the value of a"<<endl;
	cin >>a;
	cout<<"please enter the value of b"<<endl;
	cin >>b;
	cout<<"please enter the value of c"<<endl;
	cin >>c;
	if(a>b&&a>c)
	{
		cout<<"largest num is="<<a<<endl;
	}
	else if(b>a&&b>c)
	{
		cout<<"lagest num is="<<b<<endl;
	}
	else {
		cout<<"largest num is="<<c<<endl;
	}
}
