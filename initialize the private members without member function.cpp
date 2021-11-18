/*Program to initialize the private members and
display them without using member functions.*/

#include <bits/stdc++.h>
using namespace std;

class A {
private:
	int x;
	int y;
};

int main()
{
	A a;
	int* p = (int*)&a;
	*p = 3;
	p++;
	*p = 9;
	p--;
	cout << endl
		<< "x = " << *p;
	p++;
	cout << endl
		<< "y = " << *p;
}

