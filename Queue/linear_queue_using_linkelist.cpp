#include<iostream>
using namespace std;

struct  Node
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
    newNode->next=NULL;

    if(rear==NULL)
    {
        front=rear=newNode;
        cout<<val<<"inserted into queue\n"<<endl;
        return;
    }

    rear->next=newNode;
    rear=newNode;
    cout<<val<<"inserted into queue\n"<<endl;
}

void dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue Underflow!\n";
        return;
    }

    Node* temp=front;
    cout << temp->data << " removed from queue\n";
    front=front->next;

    if(front==NULL)
    {
        rear=NULL;
    }
    delete temp;
}

void display()
{
    if (front == NULL)
    {
        cout << " Queue is empty\n";
        return;
    }
    Node* temp=front;

    while(temp!=NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout<<endl;
}


int main() {
    int choice, value;

    do {
        cout << "\n--- Queue using Linked List ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
