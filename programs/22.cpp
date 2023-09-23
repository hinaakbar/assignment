#include<iostream>
using namespace std;
int main()
{
	int t,l,n;
	cout<<"please enter table number"<<endl;
	cin>>t;
	cout<<"please enter limit"<<endl;
	cin >>l;
	
	for(n=1;n<=l;n++)
	cout<<t<<"*"<<n<<"="<<t*n<<endl;
	
}
