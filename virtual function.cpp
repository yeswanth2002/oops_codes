#include<iostream>
using namespace std;

class Base {
	public:
		virtual void show()
		{ cout<<"Base"<<endl;	}
};

class Dev1 : public Base {
	public:
		void show()
		{ cout<<"Dev1"<<endl;	}
};

class Dev2 : public Base {
	public:
		void show()
		{ cout<<"Dev2"<<endl;	}
};

int main()
{
	Dev1 d1;
	Dev2 d2;
	Base *ptr;
	
	ptr = &d1;
	ptr->show();
	
	ptr=&d2;
	ptr->show();
	
	return 0;
}
