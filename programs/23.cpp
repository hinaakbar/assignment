#include<iostream>
using namespace std;
int main()
{
	int number,sum=0;
	cout<<"please enter num"<<endl;
	cin >>number;
	while(number>0){
		sum+=(number%10);
		number=number/10;
	}
	cout<<"sum of digits is="<<sum<<endl;
}
