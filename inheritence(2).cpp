#include <iostream>
using namespace std;

class person
{
	private:
	    char name[100];
		int age;
    public:
        void get_data()
        {
            cout<<"Name of the person: ";
            cin.getline(name,100);
            cout<<"Age of the person: ";
            cin>>age;
        }
        void display_data()
        {
            cout<<"Name of the person: "<<name<<endl;
            cout<<"Age of the person: "<<age<<endl;
        }
};

class employee: public person
{
	public:
		float salary;
    public:
        void get_data()
        {
            person::get_data();
            cout<<"Salary: ";
            cin>>salary;
        }
        void display_data()
        {
            person::display_data();
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

class Teacher: public employee
{
	private:
	    int exp;
    public:
        void get_data()
        {
            employee::get_data();
            cout<<"Year of Experience: ";
            cin>>exp;
        }
        void display_data()
        {
            employee::display_data();
            cout<<"Year of Experience: "<<exp;
        }
};

int main()
{
    Teacher t;
    cout<<"Enter data :"<<endl;
    t.get_data();
    cout<<endl<<"Data of the person :"<<endl;
    t.display_data();
    return 0;
}
