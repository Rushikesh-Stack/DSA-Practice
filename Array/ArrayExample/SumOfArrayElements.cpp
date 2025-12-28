#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;
    int sum=0;

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

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The sum of array elements are: "<<sum;
    



}