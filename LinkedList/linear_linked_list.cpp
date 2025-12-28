    #include<iostream>
    using namespace std;

    struct Node{
        int data;
        Node* next;
    };

    Node* insertAtBegin(Node*& head)
    {
        int value;
        Node* newNode=NULL;
        cout<<"\n Enter the value to insert at begin:\n";
        cin>>value;

        newNode= new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode; 
        }
          return head;
    }

    Node* insertAtMid(Node*& head)
    {
        Node* temp=NULL;
        Node* newNode=NULL;
        int value;
        int pos;

        cout<<"\nEnter the element you want to insert at middle:\n";
        cin>>value;
        newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        cout<<"\nEnter the position to inset element:\n";
        cin>>pos;

        temp=head;
        for(int i=1;i<pos-1 && temp !=NULL ;i++)
        {
          temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;
        cout<<"\nElement inseted successfully at Middle\n";
        return head;

    }

    Node* insertAtEnd(Node*& head)
    {
        int val;
        cout<<"\nEnter the element to insert at end:\n";
        cin>>val;
        Node* newNode;
        newNode=new Node;
        newNode->data=val;

        Node* temp=head;
        while (temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
        cout<<"\nElement inseted successfully at Middle\n";
        return head;

    }

    Node* insertAfterNode(Node*& head, Node* prevNode,int data)
    {
        Node* newNode=new Node;
        newNode->data=data;
        newNode->next=NULL;
        newNode->next=prevNode->next;
        prevNode->next=newNode;
        return head;
    }

    Node* deleteAtBegin(Node*& head)
    {
        if(head==NULL)
        {
          cout << "\nList is empty, nothing to delete.\n";
          return head;
        }

        Node* temp=NULL;
        temp=head;
        head=head->next;
        cout << "\nDeleted element: " << temp->data << endl;
        delete temp;
        return head;

    }

    Node* deleteAtMid(Node*& head)
    {
        Node* temp=NULL;
        Node* q=NULL;
        int pos;
        cout<<"\nEnter the position on which you want to delete an element:\n";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos-1 && temp!=NULL; i++)
        {
            temp=temp->next;
        }

        q=temp->next;
        temp->next=q->next;
        cout<<"\nDeleted Element is:"<<q->data<<endl;
        delete q;
        return head;

    }

    Node* deleteAtEnd(Node* head)
    {
        Node* temp=head;
        Node* q=head->next;
        while(q->next!=NULL)
        {
            q=q->next;
            temp=temp->next;
        }

        temp->next=NULL;
        cout<<"Deleted Element:"<<q->data<<endl;
        delete q;

        return head;

    }



    void traverse(Node* head)
    {
        Node* temp=head;
        cout<<"\nElements in Linked List:\n";
        while (temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
    int main()
    {
        Node* head=NULL;
        Node* temp=NULL;
        Node* newNode=NULL;

        int n, value;

        cout<<"\nEnter the no.of elements:\n";
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cout<<"Enter a value:\n";
            cin>>value;

            newNode=new Node;
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

        traverse(head);
        head=insertAtBegin(head);
        traverse(head);
        head=insertAtMid(head);
        traverse(head);
        head=insertAtEnd(head);
        traverse(head);
        head=deleteAtBegin(head);
        traverse(head);
        head=deleteAtMid(head);
        traverse(head);
        head=deleteAtEnd(head);
        traverse(head);

        cout << "NULL" << endl;
    }
