#include<iostream>
#include<string.h>
using namespace std;
class Vehicle{
    public:
    string make;
    string model;
};
class Car:public Vehicle
{
    public:
    int cost;
    int noofseats;
    string fueltype;
    Car(int c,int ns,string ft)
    {
        cost=c;
        noofseats=ns;
        fueltype=ft;
    }
    void printdetails()
    {
        cout<<"Cost of the vehicle : "<<cost<<endl;
		cout<<"Number of eats in the vehicle : "<<noofseats<<endl;
		cout<<"Fuel type of the vehicle : "<<fueltype<<endl;
    }
};
class bike:public Vehicle
{
  public:
  string cylinder;
  int noofgears;
  int fuelsize;
  bike(string c,int g,int fs)
  {
      cylinder=c;
      noofgears=g;
      fuelsize=fs;
  }
  void printdetails()
  {
      cout<<cylinder<<noofgears<<fuelsize;
  }
};
class Audi:public Vehicle
{
    public:
    int horsepower;
    Audi(int h)
    {
        horsepower=h;
    }
    void printdetails()
    {
        cout<<horsepower;
    }
};
class BajajBike:public Vehicle
{
    public:
    int enginepower;
    BajajBike(int e)
    {
        enginepower=e;
    }
    void printdetails()
    {
      cout<<enginepower;
    }
};
int main()
{
    int h,e;//h=horse power and e=engine power
    cout<<"Enter Horse Power and Engine power"<<endl;
    cin>>h>>e;
    Audi A(h);
    A.printdetails();
    cout<<endl;
    BajajBike B(e);
    B.printdetails();
    return 0;
}
