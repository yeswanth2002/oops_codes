#include <iostream>
#include <string.h>
using namespace std;

class person {
	protected:
		int age;
		char name[100];
	public:
		person(int a, char *n)
		{
			age=a;
			strcpy(name,n);
		}
		void show()
		{
			cout<<"Name of the person: "<<name<<endl;
			cout<<"Age of the person: "<<age<<endl;
		}
};

class Employee {
	protected:
		float salary;
	public:
		Employee(int s)
		{
			salary=s;
		}
		void show()
		{
			cout<<"salary: "<<salary<<endl;
		}
};
class Teacher: public person, Employee {
	protected:
		int year;
	public:
		Teacher(int a, char *n, int s, int y): Employee(s), person(a, n)
		{
			year = y;
		}
		void show()
		{
    		person::show();
			Employee::show();
			cout<<"Years of experience: "<<year<<endl;
		}
};

int main()
{
	Teacher T1 (35,"Yeswanth",40000,15);
	T1.show();
	return 0;
}
