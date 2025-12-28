#include<iostream>
using namespace std;
# define Size 5

class CircularQueue{
    private:
     int front;
     int rear;
     int a[Size];

     public:
       CircularQueue()
       {
        front=-1;
        rear=-1;
       }

     bool isFull()
     {
       return (front == 0 && rear==Size-1)|| (front == rear+1);//- It’s filled in a circular way (front = rear + 1)

     }

     bool isEmpty()
     {
        return front==-1;
     }

     void enqueue()
     {
        if((rear+1)%Size == front)
        {
            cout<<"Queue is Full.....\n";
        }
        int val;
        cout<<"Enter a value:\n";
        cin>>val;

        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%Size;
        a[rear]=val;
        cout << "Inserted " << val << endl;
        
     }

     void dequeue()
     {
        if(front==-1)
        {
            cout<<"Queue is Empty......\n";
            return;
        }
        if(front==rear)
        {
            // Queue has only one element
            front = -1;
            rear = -1;
        }
        else{
            cout<<"Deleted "<<a[front]<<endl;
            front=(front+1)%Size;
        }

     }

     void display()
     {
        if(isEmpty())
        {
            cout << "Queue is EMPTY\n";
            return;
        }
        cout<<"Queue Elemetns:\n";
        int i=front;
        while (true)
        {
           cout<<a[i]<<" ";
           if(i==rear)
           {
            break;
           }
           i=(i+1)%Size;
        }
        cout<<endl;
        
     }
};

int main(){
    CircularQueue q;

    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue();
    q.enqueue();

    q.display();

}