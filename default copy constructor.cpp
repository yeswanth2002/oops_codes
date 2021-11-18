#include<iostream>
using namespace std;

class Distance {         //Distance class
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0)    //constructor (no argument)
		{		};
		Distance(int ft, float in) : feet(ft), inches(in)  //constructor ( two aurguments)
		{	};
		void get_data()    //get values from the user
		{
			cout<<"Enter the feet :"<<endl;  cin>>feet;
			cout<<"Enter the inches :"<<endl;  cin>>inches;
		}
		void print_data()        //display distance
		{
			cout<<feet<<"  "<<inches<<endl;
		}
};

int main()
{
    Distance dist1(11,6.25);    //two arg constructor
	Distance dist2(dist1);		//one arg constructor
	Distance dist3 = dist1;		//also one arg constructor
											//display all lengths
	cout<<"distance1 = ";	dist1.print_data();
	cout<<"distance2 = ";	dist2.print_data();
	cout<<"distance3 = ";	dist3.print_data();
	return 0;
}
