#include <iostream>
using namespace std;
class fact
{
  
  public:
    int factorial(int n){
     if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;}
    
    int factorialNonRecurse(int n) {
    int product = 1;

    for (int i = 2; i <= n; i++) {
        product *= i;
    }

    return product;
}
    
};

int main()
 {  int n;

    cout << "Enter a positive integer: ";
    cin >> n;
    fact c;
    cout<<"Factorial with recursive function is : ";
    cout<<c.factorial(n);
    cout<<"\nFactorial with non-recursive function is : ";
    cout<<c.factorialNonRecurse(n);
    return 0;
 }
