#include<iostream>

using namespace std;

class Node {
	public:
  		int value;
  		Node *next;

  		Node() {		//default constructor
    			value = 0;
    			next = NULL;
  		}
  		Node(int d) {		//parametrised constructor
    			value = d;
    			next = NULL;
  		}
};

class Stack {
  	public:
    		Node * top;

  		Stack() {
    			top = NULL;
  		}

  		bool isEmpty() {
    			if(top == NULL) 
      			return true;
    			else 
      			return false;
  		}

  		void push(Node * n) {
    			if (top == NULL) {
      			top = n;
      			cout << "Node  PUSHED successfully" << endl;
    			} 
    			else {
      			Node * temp = top;
      			top = n;
      			n->next = temp;
      			cout << "Node  PUSHED successfully" << endl;
    			}
  		}

  		Node * pop() {
    			Node * temp = NULL;
    			if (top == NULL) {
      			cout << "stack underflow" << endl;
     		 	return temp;
    			} 
    			else {
      			temp = top;
      			top = top->next;
      			return temp;
    			}
  		}

  		void display() {
    			cout << "All values in the Stack are :" << endl;
    			Node * temp = top;
    			while (temp != NULL) {
      			cout <<temp->value<<endl;
      			temp = temp->next;
    			}cout << endl;
  		}

};

int main() 
{
	Stack s1;
  	int choice, value;

  	do{
    		cout<<"Select Operation to perform or Enter 0 to exit."<<endl;
    		cout<<"1. Push()"<<endl;
    		cout<<"2. Pop()"<<endl;
    		cout<<"3. display()"<<endl;
    		cin>>choice;

    		Node * new_node = new Node();

    		switch(choice){
    		case 0:
      		break;
    		case 1:
      		cout<<"Enter VALUE of NODE to push in the stack" <<endl;
      		cin>>value;
      		new_node->value = value;
     		s1.push(new_node);
      		break;
    		case 2:
      		cout<<"Pop Function Called - Poped Value: "<<endl;
      		new_node = s1.pop();
      		cout<<"TOP of Stack is: "<<new_node->value;
      		delete new_node;
      		cout<<endl;
      		break;
    		case 3:
      		s1.display();
      		cout<<endl;
      		break;
    		default:
      		cout<<"Enter Proper Option number "<<endl;
   		}

  	} while(choice != 0);

  return 0;
}
