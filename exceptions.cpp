#include<iostream>
using namespace std;
int main()
{
	int choice;	
	do
	{
	try
	{
	cout <<"1.Exception on int data type"<<endl;
	cout <<"2.Exception on double data type"<<endl;
	cout <<"3.Exception on char data type"<<endl;
	cout <<"4.Exit"<<endl;
	cout <<"Enter your choice : "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:throw (65);
		case 2:throw(41.9);
		case 3:throw('YASH');
	}
}
	catch(int a)
	{
		cout << "Integer exception "<<a;
	}
	
	catch(double b)
	{
		cout <<"Double exception "<<b;
	}
	
	catch(char c)
	{
	    cout <<"Char exception "<<c;	
	}
	
    }while(choice!=4);
}