#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
        public:
          Stack();
          void push(T i);
          T pop();
     private:
          int top;
            T Arr[100];
};

template <class T>
Stack<T>::Stack()     
{
    top = -1;
}

template <class T>    
T Stack<T>::pop()
{
    return Arr[top--];
}

template <class T>
void Stack<T>::push(T i)  
{
    Arr[++top] = i;
}


int main ()
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    Stack<float> float_stack;
     int_stack.push(29910);      
     str_stack.push("yash");    
     float_stack.push(546); 
     str_stack.push("SRM OOPS");    
     float_stack.push(731.26);    
    
     cout << int_stack.pop() << endl;
     cout << float_stack.pop() << endl;
     cout << str_stack.pop() << endl;     
        
     
     return 0;
}