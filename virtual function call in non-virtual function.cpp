#include <iostream>
using namespace std;

class Base
{
public:
	void print()
	{
		cout << "Base class print function \n";
	}
	void invoke()
	{
		cout << "Base class invoke function \n";
		this -> print();
	}
};

class Derived: public Base
{
public:
	void print()
	{
		cout << "Derived class print function \n" ;
	}
	void invoke()
	{
		cout << "Derived class invoke function \n";
		this -> print();
	}
};

int main()
{
	Base *b = new Derived;
	b -> invoke();
	return 0;
}

