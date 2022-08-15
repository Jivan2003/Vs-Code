#include <iostream>
using namespace std;
#define MAX_SIZE 5
#define __USE_C99_MATH

#include <stdbool.h>

 
class Queue {
private:
int myqueue[MAX_SIZE], front, rear;
     
public:
Queue(){
front = -1;
rear = -1;
    } 
bool isfull()
{
if(front == 0 && rear == MAX_SIZE - 1){
return true;
        }
return false;
    }
     
bool isempty()
{
if(front == -1) return true;
else return false;
    }
     
void enQueue(int value){
if(isfull())
{
cout << endl<< "Queue is full!!";
        } else {
if(front == -1) front = 0;
rear++;
myqueue[rear] = value;
cout << value << " ";
        }
    }
int deQueue(){
int value;
if(isempty())
{
cout << "Queue is empty!!" << endl; return(-1); } else { value = myqueue[front]; if(front >= rear){      //only one element in queue
front = -1;
rear = -1;
            } 
else {
front++;
            }
cout << endl << "Deleted => " << value << " from myqueue";
return(value);
        }
    }
     
    
void displayQueue()
    { 
int i;
if(isempty()) 
{
cout << endl << "Queue is Empty!!" << endl;
        }
else {
cout << endl << "Front = " << front;
cout << endl << "Queue elements : ";
for(i=front; i<=rear; i++)
cout << myqueue[i] << "\t";
cout << endl << "Rear = " << rear << endl;
        }
    }
};
int main()
{
    Queue myq;
     
myq.deQueue();       
     
cout<<"Queue created:"<<endl; myq.enQueue(10); myq.enQueue(20); myq.enQueue(30); myq.enQueue(40); myq.enQueue(50);  
myq.enQueue(60);
     
myq.displayQueue();
     
    
myq.deQueue();
     
    
myq.displayQueue();
     
return 0;
}