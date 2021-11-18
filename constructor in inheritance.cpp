#include<iostream>
using namespace std;

class Base {
	public:
		Base()
		{ cout<<"Default Cunstructor of base class"<<endl;	}
		Base(int x)
		{ cout<<"Paramitarized Constructor of Base class"<<x<<endl;	}
};

class Derived : public Base {
	public:
		Derived()
		{ cout<<"Default constructor of Derived class.";	}
		Derived(int a)
		{ cout<<"Paramitarized constructor of Derived class "<<a;	}
		Derived(int x,int a):Base(x)
		{   cout<<"Param of Derived"<<a<<endl;   }
};

int main()
{
	Derived (10);
}
