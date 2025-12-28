#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* insertAtBegin(Node* head)
{
    Node* temp=NULL;
    int val;
    cout<<"Enter the element to insert:\n";
    cin>>val;
    Node* newNode=new Node;
    newNode->data=val;
    newNode->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=newNode;
        head->next=head;
        return head;
    }
    else{
        newNode->next=head;
        head=newNode;
        do{
            temp=temp->next;

        }while(temp->next!=head->next);

        temp->next=head;
    }
   return head;
}

Node* insertAtMid(Node* head)
{
    Node* newNode=NULL;
    int val,pos;
    cout<<"Enter a value to insert:\n";
    cin>>val;
    cout<<"Enter the position for insertion:\n";
    cin>>pos;

    newNode=new Node;
    newNode->data=val;
    newNode->next=NULL;
    Node* temp=head;

    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;

    return head;
}

Node* insertAtEnd(Node* head)
{
    int val;
    Node* temp=NULL;
    cout<<"Enter the element to insert:\n";
    cin>>val;
    Node* newNode=new Node;
    newNode->data=val;
    newNode->next=NULL;


    temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);

    temp->next=newNode;
    newNode->next=head;
    return head;
}



Node* deleteBegin(Node* head)
{

    if(head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return NULL;
    }

    Node* ptr = head;

    // Single-node list
    if(head->next == head) {
        cout << "Deleted Element: " << ptr->data << endl;
        delete ptr;
        return NULL;
    }

    Node* temp=head;
    do{
      temp=temp->next;
    } while(temp->next!=head); // this is stop at last node

    //last node points to new head
    temp->next=head->next;
    // this means old point to next of head
    head=head->next;
    
    cout<<"\nDeleted Element:\t "<<ptr->data<<endl;
    delete ptr;

    return head;
}

Node* deleteAtMid(Node* head)
{
    int pos;
    cout<<"Enter the position to delete at middle:\n";
    cin>>pos;
    
    Node* temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }

    Node* q=NULL;
    q=temp->next;
    temp->next=q->next;
    cout<<"\nDeleted Element:\t "<<q->data<<endl;
    delete q;

    return head;
}

Node* deleteAtEnd(Node* head)
{
    Node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);

    Node* q=head;
    do{
        q=q->next;
    }while(q->next!=temp);

    q->next=head;

     cout<<"\nDeleted Element:\t "<<temp->data<<endl;
    delete temp;

    return head;
}

void traversal(Node* head)
{
    Node* temp=head;
    cout<<"\nElements in Linked List:\n";
    if(head == NULL) 
    {
       cout << "List is empty\n";
       return;
    }
    do
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }while(temp!=head);

     cout << endl;
}



int main()
{
    int n;
    int value;
    cout<<"Enter the no.of element in Circular linked list:\n";
    cin>>n;

    Node* head=NULL;
    Node* temp=NULL;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value;\n";
        cin>>value;

        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        
    }

    if(temp!=NULL)
    {
        temp->next=head;
    }

    traversal(head);
    head=insertAtBegin(head);
    traversal(head);
    head=insertAtEnd(head);
    traversal(head);
    head=insertAtMid(head);
    traversal(head);
    head=deleteBegin(head);
    traversal(head);
    head=deleteAtMid(head);
    traversal(head);
    head=deleteAtEnd(head);
    traversal(head);
    
}