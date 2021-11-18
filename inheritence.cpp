#include<iostream>
using namespace std;

class Employee {
	private:
		int id;
		char name[100];
		
	public:
		
		
		void get_data()
		{
			cout<<"enter the Id of the employee "<<endl;
			cin>>id;
			cout<<"Enter the name of the Employee "<<endl;
			cin.getline(name,100);
		}		
		
		void print_data()
		{
			cout<<"The Id of the employee "<<id<<endl;
			cout<<"The name of the employee "<<name<<endl;
		}
};

class FullTimeEmployee: public Employee {
	private:
		int age;
		int salary;
	public:
		
		void get_data()
		{
			Employee::get_data();
			cout<<"Enter the age of the employee "<<endl;
			cin>>age;
			cout<<"Enter the salary of the employee "<<endl;
			cin>>salary;
		}
		
		void print_data()
		{
			Employee::print_data();
			cout<<"The Age of the employee "<<age<<endl;
			cout<<"The salary of the employee "<<salary<<endl;
		}
};

int main()
{
	FullTimeEmployee t;
	cout<<"Enter data :"<<endl;
	t.get_data();
	cout<<"The details of the person :"<<endl;
	t.print_data();
	
	return 0;
}
