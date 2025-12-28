#include<iostream>
using namespace std;

int main()
{
    int a1[100];
    int a2[100];
    int a3[100];

    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;

    cout<<"Enter the 1st array elements:\n";
    for(int i=0;i<n;i++)
    {
       cin>>a1[i];
    }

    cout<<"Enter the 2nd array elements:\n";
    for(int i=0;i<n;i++)
    {
       cin>>a2[i];
    }

    for(int i=0;i<n;i++)
    {
        a3[i]=a1[i];
    }

    int mergeSize=n;
    for(int i=0;i<n;i++)
    {
        a3[mergeSize]=a2[i];
        mergeSize++;
    }

    cout<<"Elements after merging:\n";
    for(int i=0;i<n*2;i++)
    {
        cout<<a3[i]<<"\t";
    }

    // int i=0;
    // int j=i+1;
    for(int i=0;i<n*2;i++)
    {
        for(int j=i+1;j<n*2;j++)
        if(a3[i]>a3[j])
        {
            int temp =a3[i];
            a3[i]=a3[j];
            a3[j]=temp;
        }
    }

    cout<<"After Sorting array:\n";
    for(int i=0;i<n*2;i++)
    {
        cout<<a3[i]<<"\t";
    }
    
}