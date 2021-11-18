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
		void add_dist(Distance, Distance );    //add length d2 and d3
};

void Distance::add_dist(Distance d2, Distance d3)		//member function defined outside the class
{
	inches=d2.inches+d3.inches;   //add the inches
	feet=0;
	if(inches=12.0)
	{
		inches-=12.0;
		feet++;
	}
	feet+=d2.feet+d3.feet;
}

int main()
{
	Distance dist1,dist3;        //define two ;lengths
	Distance dist2(11,6.25);	//define and initialize d2
	
	dist1.get_data();			//get d1 from user
	dist3.add_dist(dist1, dist2);		//d3=d1+d2
											//display all lengths
	cout<<"distance1 = ";	dist1.print_data();
	cout<<"distance2 = ";	dist2.print_data();
	cout<<"distance3 = ";	dist3.print_data();
	return 0;
}
