#include <iostream>
using namespace std;
#define MAX 5
 

class Stack
{
    private:
        int top;
        int ele[MAX];
    public:
        Stack();
        int     isFull();
        int     isEmpty();
        void    push(int item);
        int     pop(int *item);
}; 
 

Stack:: Stack()
{
    top = -1;
}
 

int Stack:: isFull()
{
    int full = 0;
 
    if( top == MAX-1 )
        full = 1;
 
    return full; 
}
 

int Stack:: isEmpty()
{
    int empty = 0;
 
    if( top == -1 )
        empty = 1;
 
    return empty;
}
 

void Stack:: push( int item )
{
    if( isFull() )
    {
        cout<<"\nStack Overflow";
        return;
    }
 
    top++;
    ele[top] = item;
 
    cout<<"\nInserted item : "<< item;  
}
 

int Stack:: pop( int *item )
{
    if( isEmpty() )
    {
        cout<<"\nStack Underflow";
        return -1;
    }
 
    *item = ele[top--];
    return 0;
}
 
int main()
{ 
    int item = 0;
 
    Stack s = Stack();
 
    s.push( 10 );
    s.push( 20 );
    s.push( 30 );
    s.push( 40 );
    s.push( 50 );
    s.push( 60 );
 
 
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
    if( s.pop(&item) == 0 )
        cout<<"\nDeleted item : "<< item;
 
    cout<< endl;
 
    return 0;
}