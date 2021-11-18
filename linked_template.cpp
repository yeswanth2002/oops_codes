#include<iostream>
using namespace std;

template<typename T>class Node{
    private:
        T data;
        Node<T>* next;
        template<typename U>friend class LinkedList;
    public:
        Node(){
            this->next = NULL;
        }
};

template<typename T>class LinkedList{
    private:
        Node<T>* head;
    public:
        LinkedList(){
            this->head = NULL;
        }

        void add(T item){
            Node<T>* node = new Node<T>[1];
            node->data = item;
            if(head == NULL){
                head = node;
                return;
            }
            Node<T>* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = node;
        }


        int length(){
            int len = 0;
            Node<int>* temp = head;
            while(temp != NULL){
                len++;
                temp = temp->next;
            }
            return len;
        }

        void displayAll(){
            if(head == NULL){
                cout<<"linked list is empty"<<endl;
                return;
            }
            Node<T>* temp = head;
            while(temp != NULL){
                cout<<temp->data<<"  ";
                temp = temp->next;
            }
        }

        void remove(){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }
            if(head->next == NULL){
                head = NULL;
                return;
            }

            Node<T>* temp = head;
            while(temp != NULL){
                if(temp->next->next == NULL){
                    temp->next = NULL;
                    break;
                }
                temp = temp->next;
            }
            
        }

        T get(int index){
            if(head == NULL){
                cout<<"linked list is empty"<<endl;
                return 0;
            }
            if(index >= length() || index < 0){
                cout<<"index out of bound !"<<endl;
                return 0;
            }
            if(index == 0){
                return head->data;
            }
            int count = 0;
            T res;
            Node<T>* temp = head;
            while(temp != NULL){
                if(count++ == index){
                    res = temp->data;
                    break;
                }
                temp = temp->next;
            }
            return res;
        }

};

int main(){
    LinkedList<float> list;
    int ch;
    float item;
    int index;
    bool quit = false;
    do{
        cout<<"\nselect option :"<<endl;
        cout<<"1. Insert "<<endl;
        cout<<"2. Delete "<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. exit"<<endl;
        cin>>ch;
        cout<<endl;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element to insert: "<<endl;
            cin>>item;
            list.add(item);
            break;
        case 2:	  	
            list.remove();
            break;
            
        case 3:
        	  list.displayAll();
            break;

        case 4:
            quit = true;
            break;
            
        default:
            cout<<"invalid selection"<<endl;
            break;
        }
    }while(!quit);
    return 0;
}
