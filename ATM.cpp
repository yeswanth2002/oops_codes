#include <iostream>
#include <fstream>
using namespace std;

class ATM{
	public:
	int b,withdraw; 
        string p,temp,temp1;
    
    
};
struct Node {
   int data;
   struct Node *next;
};

int main()
{   ATM ply;
    ply.b=20000;
    ply.p="passwd";
    fstream myfile1,myfile2;
    myfile1.open ("text1.txt");
    myfile1 << ply.b;
    myfile2.open ("text2.txt");
    myfile2 <<ply.p;
    int flag=0;	
    int choice;
    while(flag!=3){
        cout<<"\nWelcome to PLY bank ATM\n";
        cout<<"your bank balance is : "<<ply.b;
        
        cout<<"\nEnter '1' to withdraw,Enter '2' to change password,Enter '3' to exit : ";
        cin>>choice;
        switch(choice){
            case 1 :
               cout<<"Enter amount you want to withdraw : ";
               cin>>ply.withdraw;
               if(ply.withdraw<ply.b){
                   cout<<"Thank you for using our ATM,Please collect you money.";
                   ply.b=ply.b-ply.withdraw;
                   cout<<"\nyour updated balance is : "<<ply.b;
                   cout<<"\n\n        *\n";
                   struct Node* head = NULL;
                   
                  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
                  new_node->data = ply.withdraw;
                  new_node->next = head;
                  head = new_node;
                  struct Node* ptr;
                  ptr = head;
  
                  myfile1 << "->"<<ptr->data ;
    
                   break;
               }
               else {
                   cout<<"balance is unsufficient";
                   cout<<"\n\n        *\n";
                    break;
               }
            case 2 :
                cout<<"\nEnter your old password : ";
                cin>>ply.temp;
                if(ply.temp==ply.p){
                    cout<<"\nEnter the new password : ";
                    cin>>ply.temp1;
                    ply.p=ply.temp1;
                    cout<<"The new password is "<<ply.p;
                    cout<<"\n\n       *\n";
                    myfile2 <<"->"<<ply.p;
                    break;
                }
                else {
                    cout<<"\nyour old password entered is incorrect .";
                    cout<<"\n\n       *\n";
                     break;
                    }
            case 3 :
                cout<<"\nThanks for visiting the PLY bank.";
                flag = 3;
            default: cout<<"\n Invalid Choice\n";    
        }
    }

    myfile2.close();
    myfile1.close();
    return 0;
}