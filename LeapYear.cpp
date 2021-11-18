#include<iostream>
using namespace std;

class Leap_Year{
	public:
		int x;
		Leap_Year(int year);
		~Leap_Year();
};

Leap_Year::Leap_Year(int year)
{
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				cout<<year<<" is a leap year."<<endl;
			}
			else
			{
				cout<<year<<" is not a leap year."<<endl;
			}
		}
		else
		{
			cout<<year<<" is a leap year."<<endl;
		}
	}
	else
	{
		cout<<year<<" is not a leap year."<<endl;
	}
}

Leap_Year::~Leap_Year()
{
	cout<<"Destructor is Deleting the memory"<<endl;
}

int main()
{
	int year;
	cout<<"Enter the year : "<<endl;
	cin>>year;
	Leap_Year t(year);
	return 0;
}
