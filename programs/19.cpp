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
	if(a<b)
{
	if(a<c)
	     cout<<"smallest num is ="<<a<<endl;
	else
	    cout<<"smallest num is="<<b<<endl;
}
   if (b<c)
          cout<<"smallest num is ="<<b<<endl;
   else
         cout<<"smallest num is="<<c<<endl;
      
}
