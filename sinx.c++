#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, n;
    float x, y, value, t;
    cout<<" Enter the value for x : ";
    cin>>x;
    cout<<" Enter the value for n : ";
    cin>>n;
    y=3.14159/180;
    x*=y;
    t=x;
    value=x;
    for(i=1;i<=n;i++)
    {
        t*=((-1)*x*x)/(2*i*(2*i+1));
        value+=t;
    }
    cout<<" The value of Sin("<<x<<") = "<<value<<endl;
    return 0;
}
