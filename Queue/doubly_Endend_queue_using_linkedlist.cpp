#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};
// Initially no element in queue
Node *front = NULL;
Node *rear = NULL;

void InsertAtFront(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (front == NULL)
    {
        front = rear = newNode;
        cout << val << "Inserted successfully....\n";
        return;
    }

    newNode->next = front;
    front->prev = newNode;
    front = newNode;
}

void InsertAtRear(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        cout << val << "Inserted Successfully......\n";
        return;
    }
    newNode->prev = rear;
    rear->next = newNode;
    rear = newNode;

    cout << val << "Inserted Successfully......\n";
}

void DeleteAtFront()
{
    if (front == NULL)
    {
        cout << "Queue is Underflow\n";
        return;
    }

    // only one element in queue
    if (front == rear)
    {
        cout << front->data << " deleted Successfully\n";
        delete front;
        front = rear = NULL;
        return;
    }
    Node *temp = front;
    cout << front->data << " deleted Successfully......\n";
    front = front->next;
    front->prev = NULL;
    delete temp;
}

void DeleteAtRear()
{
    // Queue Empty
    if (rear == NULL)
    {
        cout << "Queue is Epmty.........\n";
        return;
    }

    // Queue have only one element
    if (front == rear)
    {
        cout << rear->data << "Deleted Successfully.......\n";
        delete rear;
        front = rear = NULL;
        return;
    }

    Node *temp = rear;
    cout << temp->data << "deleted successfully......\n";
    Node *q = rear->prev;
    rear = q;
    rear->next = NULL;
    delete temp;
}

void Display()
{
    Node *temp = front;
    cout << "\n Elements in Doubly Ended Queue:\n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int ch;
    int val;

    do
    {
        cout << "****************Doubly Ended Queue****************\n";
        cout << "1. Insert At Front\n";
        cout << "2. Insert At Rear\n";
        cout << "3. Delete At Front\n";
        cout << "4. Delete At Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << endl;

        cout << "Enter your  choice:\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter a value:\n";
            cin >> val;
            InsertAtFront(val);
            break;

        case 2:
            cout << "Enter a value:\n";
            cin >> val;
            InsertAtRear(val);
            break;

        case 3:
            DeleteAtFront();
            break;

        case 4:
            DeleteAtRear();
            break;

        case 5:
            Display();
            break;

        case 6:
            cout << "Exiting......\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (ch != 6);
}