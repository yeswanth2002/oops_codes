#include<iostream>
using namespace std;

class Rectangle {
	public:
		int length;
		int breadth;
		
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
};

//pointer to object. creating object in stack using pointer

/*int main()
{
	Rectangle r;
	Rectangle *ptr;
	ptr = &r;
	ptr->length = 15;
	ptr->breadth = 10;
	
	cout<<"Area of the rectangle is "<< ptr->area()<<endl;
	cout<<"Perimeter of the rectangle is "<<ptr->perimeter()<<endl;
	
	return 0;
}*/

//creating object in heap using pointer
int main()
{
	Rectangle *ptr = new Rectangle;
	ptr->length = 15;
	ptr->breadth = 10;
	
	cout<<"Area of the rectangle is "<< ptr->area()<<endl;
	cout<<"Perimeter of the rectangle is "<<ptr->perimeter()<<endl;
	
	return 0;
}
