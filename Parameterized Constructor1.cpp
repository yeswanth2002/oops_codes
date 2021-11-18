#include<iostream>
using namespace std;

class ParaCon{
	public:
		int x;
		ParaCon(int i);
		~ParaCon();
};
ParaCon::ParaCon(int i)
{
	x=i;
}
ParaCon::~ParaCon()
{
	cout<< "Destructing those objects whose x value is " << x <<" \n";
}
int main()
{
	ParaCon t1(15);
	ParaCon t2(25);
	cout<<t1.x<<" "<<t2.x<<endl;
	return 0;
}
