#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter a value:"<<endl;
        cin>>a[i];
    }

    int i=0;
    int flag=1;

    do{
        if(a[i]<a[i+1] || a[i]==a[i+1])
        {
            i++;
        }
        else{
            flag=0;
            break;
        }       
        
    }while(i<n-1);

    if(flag==0)
    { 
        cout<<"Unsorted array\n";
    }
    else{
        cout<<"Sorted array\n";
    }
}