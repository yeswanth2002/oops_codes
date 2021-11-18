#include<iostream>
#include<vector>
using namespace std;

class node
{
	public:
		int v;
		node *next;
		node()
		{
			next = NULL;
		}
};

class LinkedList{
node *head;
public:		
	LinkedList()
	{
		head = NULL;
	}
		
	void insert_at_beginning(int v)
	{
		node *temp = new node();
		temp->v = v;
		temp->next = head;
		head = temp;
	}
		
	void insert_at_end(int v)
	{
		node *temp = new node();
		temp->v = v;
		if (head == NULL)
		{
			head = temp;
		}
		else{
			node *ptr = head;
			
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
				
			ptr->next = temp;
		}
	}
		
		
	void delete_at_beginning()
	{
	    if (head == NULL)
	    {
		cout<<"List is Empty"<<endl;
	    }
	    else
	    {
		cout<<"Element Deleted: "<<head->v<<endl;
		node *temp = head;
		head = head->next;
		delete(temp);
		}
	}
		
	void delete_at_end()
	{
		if (head == NULL)
		{
		     cout<<"List is Empty"<<endl;
		}
		else if (head->next == NULL)
		{
			cout<<"Element Deleted: "<<head->v<<endl;
			delete(head);
			head = NULL;
		}
		else
		{	
			node *temp = head;
			while (temp->next->next != NULL) 
			{
				temp = temp->next;
			}
			cout<<"Element Deleted: "<<temp->next->v<<endl;
			delete(temp->next);
			temp->next = NULL;
		}					
	}
		
		void print()
		{
			if (head == NULL)
			{
				cout<<"List is empty"<<endl;
			}
			else
			{
			        node *temp = head;
				cout<<"Linked List: ";
				while (temp != NULL)
			        {
					cout<<temp->v<<"->";
					temp = temp->next;
				}
				cout<<"NULL"<<endl;
			}
                 }
                 
                 void reverse(){
		node *tempnode = NULL;
		node *prevnode = NULL;
		node *currentnode = head;

		while (currentnode != NULL)
		{
			tempnode = currentnode->next;
			currentnode->next = prevnode;
			prevnode = currentnode;
			currentnode = tempnode;
		}
		head = prevnode;
	}
			
};


int main() {
	
	char opt;
	LinkedList ll;
       cout<<"Enter S for singly linked list OR C for circular linked list : ";
       cin>>opt;
    switch(opt) {
      case 'S' :
	
	cout<<"1 to add first element";
	cout<<"\n2 to Insert at the end";
	cout<<"\n3 to Delete from beginning";
	cout<<"\n4 to Delete from the end";
	cout<<"\n5 to Reverse";
	cout<<"\n0 to Exit";
	
	int choice,v,p;
	

	do {
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"Enter Element: ";
				cin>>v;
				ll.insert_at_beginning(v);
				ll.print();
				break;
				
			case 2:
				cout<<"Enter Element: ";
				cin>>v;
				ll.insert_at_end(v);
				ll.print();
				break;
				
				
			case 3:
				ll.delete_at_beginning();
				ll.print();
				break;
				
			case 4:
				ll.delete_at_end();
				ll.print();
				break;
			case 5:
				ll.reverse();
				ll.print();
				break;	
				
		}
	} while (choice != 0);
	break;
    case 'C' :
	cout<<"bd";
	
	break;  }
	
}
