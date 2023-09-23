#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"please enter the value of n"<<endl;
	cin>>n;
	a=n/100;
	n=n%10;
	b=n/100;
	n=n%10;
	cout<<a<<b;
	return 0;
}
