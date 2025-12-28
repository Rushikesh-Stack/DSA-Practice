#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front=NULL;
Node* rear=NULL;

void enqueue(int val)
{
    Node* newNode=new Node();
    newNode->data=val;

    if(front == NULL)
    {
       front=rear=newNode;
       rear->next=front;// circular link
       cout<< val << " inserted\n";
       return;
    }

    newNode->next=front;
    rear->next=newNode;
    rear=newNode;
    cout << val << " inserted\n";
    
}

void dequeue()
{
   if(front==NULL)
   {
      cout<<"Queue is Empty";
      return ; 
   }
   if(front== rear)
   {
     cout<<front->data<<"deleted"<<endl;
     delete front;
     front=rear=NULL;
     return;
    }
   
    Node* temp = front;
   cout << temp->data << " removed\n";
    front=front->next;
    rear->next=front;
    delete temp;

}