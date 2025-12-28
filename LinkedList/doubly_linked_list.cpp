#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* insertAtBegin(Node* head)
{
 
  int val;
  cout<<"\nEnter the element to insert at begin in DLL:\n";
  cin>>val;
  Node* newNode=new Node;
  newNode->data=val;
  newNode->next=NULL;
  newNode->prev=NULL;

  // Node* temp=head;
   newNode->next=head;
   head->prev=newNode;
   head=newNode;

   return head;
}

Node* insertAtEnd(Node* head)
{
  int val;
  cout<<"\nEnter the value to insert at end:\n";
  cin>>val;

  Node* newNode=new Node;
  newNode->data=val;
  newNode->next=NULL;
  newNode->prev=NULL;

  Node* temp=head;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->prev=temp;
  newNode->next=NULL;

  return head;
  
}

Node* insertAtMid(Node* head)
{
   int pos;
   int val;
   cout<<"\nEnter the element to insert:\n";
   cin>>val;
   cout<<"Enter the position:\n";
   cin>>pos;

   Node* newNode=new Node;
   newNode->data=val;
   newNode->next=NULL;
   newNode->prev=NULL;

   Node* temp=head;
   for(int i=0;i<pos-1;i++)
   {
      temp=temp->next;
   }
   newNode->next=temp->next;
   newNode->prev=temp;
   temp->next=newNode;

}

void traverse(Node* head)
{
    Node* temp=head;
    cout<<"\nElements in Doubly Linked List:\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}


int main()
{
   int n;
   cout<<"\nEnter the no.of elements in DLL:\n";
   cin>>n;
   int val;   

   Node* head=NULL;
   Node* temp=NULL;
   Node* newNode=NULL;
   cout<<"Enter the element to insert:\n";
   for(int i=0;i<n;i++)
   {
      cout<<"Enter a value:\n";
      cin>>val;

      newNode=new Node;
      newNode->data=val;
      newNode->next=NULL;
      newNode->prev=NULL;

      if(head==NULL)
      {
        head=newNode;
        newNode->next=NULL;
        temp=head;
      }
      else{
        newNode->prev=temp;
        temp->next=newNode;
        temp=newNode;
      }
   }
   traverse(head);
   head=insertAtBegin(head);
   traverse(head);
   head=insertAtEnd(head);
   traverse(head);
}