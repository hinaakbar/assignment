#include<iostream>
using namespace std;
int main()
{
	int a,factorial=1;
	cout<<"please enter the value of a"<<endl;
	cin >>a;
	while(a>1)
	{
		factorial*=a;
		a--;
	}
	cout<<"factorial of a is="<<factorial<<endl;
	return 0;
}
