#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    string myText1,myText2;
    fstream myfile1("text1.txt");
    fstream myfile2("text2.txt");
   cout<<"Withdrawal : ";
   while(getline(myfile1,myText1)) {
   	cout<<myText1;
   }
    cout<<"\nPassword Change : "; 
   while(getline(myfile2,myText2)) {
   	cout<<myText2;
   }
    
    myfile1.close();
  
    myfile2.close();
    return 0;
}