#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Stack
{
    private:
       Node* top;
    public:
       
    Stack()
    {
        top=NULL;
    }

    void push(int val)
    {
        Node* newNode=new Node;
        newNode->data=val;
        newNode->next=top;
        top=newNode;
        cout<<newNode->data<<"\t pushed into stack\n";
        

    }

    bool isEmpty()
    {
        return top==NULL;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Underflow\n";
            return;
        }
        else{
            Node* temp=top;
            top=top->next;
            cout<<temp->data<<"\t popped from stack\n";
            delete temp;
            
        } 
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty......\n";
            return -1;
        }
        else
        {
            cout<<top->data<<"\t is a top element of a stack";
            return top->data;
        }
    }

    void stackBottom()
    {
        Node* temp=top;
        while(temp->next!=NULL) 
        {
            temp=temp->next;
        }
        cout<<"\n"<<temp->data<<" is the bottom element of the stack\n";

    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty......\n";
        }
        else
        {
            Node* temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data << " -> ";
                temp=temp->next;
            }
            cout << "NULL\n";


        }
    }

};


int main()
{
      Stack s;

      s.pop();
      s.push(50);
      s.push(10);
      s.push(30);
      s.push(20);
      s.push(40);
      s.display();
      s.pop();
      s.pop();
      s.peek();
      s.display();
      s.isEmpty();
      s.stackBottom();
     



}

