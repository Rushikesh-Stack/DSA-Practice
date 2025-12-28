#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;

    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    cout<<"Elements in array:\n";
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\t"<<"\n";
    }
    int j=n-1;

    for(int i=0;j>=i;i++)
    {
        
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       j--;

    }

    cout<<"Reverse Array:\n";
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\t"<<"\n";
    }


}