#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"please enter a character"<<endl;
	cin>>ch;
	switch(ch) 
	{
	case 'A':
	      cout<<"vowel"<<endl;
	       break;
	case 'E':
	       cout<<"vowel"<<endl;
	     break;
	case 'I':
			cout<<"vowel"<<endl;	
		     break;
	case'O':
				cout<<"vowel"<<endl;	
			     break;
    case'U':
					cout<<"vowel"<<endl;	
				    break;
	default:
		              cout<<"consonant"<<endl;
		              break;
					}
}
