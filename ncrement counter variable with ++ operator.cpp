//	Increment counter using operator ++
#include<iostream>
using namespace std;

class Counter {
	private:
		unsigned int count;
	public:
		Counter() : count(0)
			{	}
		unsigned int get_count()
			{	return count;	}
		void operator ++ ()
		{
			++count;
		}
};

int main()
{
	Counter c1, c2;
	
	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;
	
	++c1; ++c2; ++c2;
	
	cout<<"c1 = "<<c1.get_count()<<endl;
	cout<<"c2 = "<<c2.get_count()<<endl;
	
	return 0;
}

/* 
The operator Keyword:
void operator ++ ()
The return type (void in this case) comes first, followed by the keyword operator, fo llowed
by the operator itself (++), and finally the argument list enclosed in parentheses (which are
empty here). This declarator syntax tells the compiler to call this member function whenever
the ++ operator is encountered, provided the operand (the variable operated on by the ++) is of
type Counter.

Operator Arguments
In main() the ++ operator is applied to a specific object, as in the expression ++c1. Yet 
operator++() takes no arguments. What does this operator increment? It increments the 
count data in the object of which it is a member. Since member functions can always access
the particular object for which they’ve been invoked, this operator requires no arguments.
*/
