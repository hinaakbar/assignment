#include<iostream>
using namespace std;
int main()
{
	int a,b; 
	int op;
	cout<<"please enter the value of a"<<endl;
	cin >>a;
	cout<<"please enter the value of b"<<endl;
	cin >>b;
	cout<<"plesae enter the operator"<<endl;
	cin>>op;
	switch(op)
	{
	  case '+':
	  	cout<<"addition="<<a+b<<endl;
	  	break;
	   case '-':
	   	cout<<"sub="<<a-b<<endl;
	   	break;
	   	case'*':
	   		cout<<"multiplication="<<a*b<<endl;
	   		break;
	   	case'/':
	   		cout<<"division="<<a/b<<endl;
	   		break;
	   	case'%':
	   		cout<<"modulus="<<a%b<<endl;
	   		break;
	   		default:
	   			cout<<"invalid op"<<endl;
	   			
	}
	
}
