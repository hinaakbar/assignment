#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	int sum,product;
	float average;
	cout<<"please enter the value of a"<<endl;
	cin >>a;
	cout<<"please enter the value of b"<<endl;
	cin >>b;
	cout<<"please enter the value of c"<<endl;
	cin >>c;
    cout<<"please enter the value of d"<<endl;
    cin >>d;
    sum=a+b+c+d;
    product=a*b*c*d;
    average=sum/4;
    cout<<sum<<endl;
    cout<<product<<endl;
    cout<<average<<endl;
}
