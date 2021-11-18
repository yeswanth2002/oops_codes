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
        	T st[100];
};

template <class T>
Stack<T>::Stack()
{
	top = -1;
}

template <class T>
void Stack<T>::push(T i)
{
	st[++top] = i;
}

template <class T>
T Stack<T>::pop()
{
	return st[top--];
}

int main ()
{
	Stack<int> int_stack;
	Stack<float>float_stack;
	Stack<string> str_stack;
     int_stack.push(54);
     float_stack.push(23.6);
     int_stack.push(-1);
     str_stack.push("OOPS");
     str_stack.push("stack");
     str_stack.push("WEEK13");
     
     cout << int_stack.pop() << endl;
     cout<<float_stack.pop()<<endl;
     cout << int_stack.pop() << endl;
     cout << str_stack.pop() << endl;
     cout << str_stack.pop() << endl;
     cout << str_stack.pop() << endl;
     
     return 0;
}
