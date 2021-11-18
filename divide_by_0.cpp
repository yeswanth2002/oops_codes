#include<iostream>
using namespace std;
int main() 
{
    int a,b,c;
    cout << "Enter the value of A:";
    cin>>a;
    cout << "Enter the value of B:";
    cin>>b;
    cout << "Enter the value of C:";
    cin>>c;
    try {
        if ((b-c)!= 0)
            cout << "The value of a/b is : " << (a/(b-c));
        else 
            throw (b-c);
		} 
	catch (int x) 
	{
        cout << "Division by 0 not possible"; 
	}
    return 0;
}