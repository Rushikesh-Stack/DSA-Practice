#include<iostream>
using  namespace std;

#define Max 6

class Stack
{
    int arr[Max];
    int top;


    public:
       Stack() //constructor to initalize top
       {
        top=-1;
       }

       void push(int val)
       {
         if(top==Max-1)
         {
            cout<<"Stack is overflow! Cannot push element:\t"<<val<<endl;
         }
         else{
            top=top+1;
            arr[top]=val;
            cout<<"Element is pushed successfully into stack....."<<endl;

         }
       }

       void pop()
       {
        if(top==-1)
        {
            cout<<"Stack Underflow! Can't pop the element:\n";
        }
        else{
            cout << "Element " <<arr[top] << " is popped successfully from stack." << endl;
            top--;
        }
       }

       void peek()
       {
        if(top==-1)
        {
            cout<<"Stack is empty!\n";
        }
        else{
            cout<<"Top element:"<<arr[top]<<endl;
        }
       }

       void display()
       {
        if(top==-1)
        {
            cout<<"Stack is empty!\n";
        }
        else{
            cout<<"Elemets in Stack:\n";
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
       }
};

int main()
{
    Stack s;
    int ch,val;

    do
    {
      cout<<"\n******Stack Menu******\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top element)\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                 cout<<"Enter the element:\n";
                 cin>>val;
                 s.push(val);
                 break;
            
            case 2: s.pop();
                  break;
            
            case 3: s.peek();
                  break;
               
            case 4:s.display();
                   break;

            default:
                cout << "Invalid choice! Please try again.\n";     

        }
    } while (ch!=5);

    return 0;
}