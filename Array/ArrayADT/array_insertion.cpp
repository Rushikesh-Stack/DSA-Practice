#include<iostream>
using namespace std;

void display(int arr[],int &n)
{
    cout<<"Elements in array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}

void create(int a[],int &n)
{
    cout<<"Enter the size of an array\n";
    cin>>n;
    cout<<"Enter the no.of elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

int insert(int a[],int &n)
{
   int data;
    cout<<"Enter the element to insert in array:\n";
    cin>>data;
    int pos;
    cout<<"Enter the position to insert element:\n";
    cin>>pos;

   if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return 1;   // failure
    }
    
    for(int i=n;i>pos;i--)  //n=no.of element + 1 i.e 4+1=5 n=5
    {
        a[i]=a[i-1]; //shift from [n-1] index to n pos
    }
    a[pos]=data;
    n++;

    cout << "Element inserted successfully.\n";
    return 0;  

}

void Delete(int a[],int &n)
{
    int pos=-1;
    cout<<"Enter the pos of an element for deletion:\n";
    cin>>pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        
    }
    else{

    for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i+1]; // deletion by shifting a[i+1] to i as i=pos
    }
    n--;
    cout<<"Element inserted Successfully....\n";
}

}
int main()
{
    int a[100];
    int n;
    create(a,n);
    display(a,n);
    insert(a,n);
    display(a,n);
    Delete(a,n);
    display(a,n);
    
}
