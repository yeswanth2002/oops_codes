#include<iostream>
using namespace std;
int arr[10];
int main()
{
	int n;
	cout<<"Enter size of the array :"<<endl;
	cin>>n;
	cout<<"\nEnter Elements of the array :";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	try
	{
		int x;
		cout<<"\nEnter the index of the Element you want to acces :";
		cin>>x;
		if (x<n && x>=0)
		{
			cout<<"\nElements at the index :"<<a[x];
		}
		else
		throw (x);
	}
	catch(int i)
	{
		cout<<"\nAccessing Element is Not Possible it's out of range";
	}
}