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

};
class Audi:public Vehicle
{
    public:
    int horsepower;
    Audi(int h)
    {
        horsepower=h;
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

};
int main()
{
    int h,e;//h=horse power and e=engine power
    cout<<"Enter Horse Power and Engine power"<<endl;
    cin>>h>>e;
    Audi A(h);
    cout<<endl;
    BajajBike B(e);
    return 0;
}
