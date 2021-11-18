// C++ program to illustrate the working
// of memory allocation if new and free
// are mixed
#include <iostream>
using namespace std;

class A {
private:
	int* p;

public:
	// Default Constructor
	A()
	{
		cout << "Constructor is executed"
			<< endl;
		p = new int;
		*p = 5;
	}

	// Destructor
	~A()
	{
		cout << "Destructor is executed"
			<< endl;
		// resource clean-up
		cleanup();
	}

	// Member Function
	void cleanup()
	{
		cout << "Resource clean-"
			<< "up completed" << endl;
	}

	// Function to display the value
	// of class variables
	void display()
	{
		cout << "value is: "
			<< *p << endl;
	}
};

// Driver Code
int main()
{
	// Create Object of class A
	A* ptr = new A();
	ptr->display();

	// Destructor will be called
	delete ptr;

	A* ptr1 = new A();
	ptr1->display();

	// No destructor will be called
	// hence no resource clean-up
	free(ptr);

	return 0;
}

