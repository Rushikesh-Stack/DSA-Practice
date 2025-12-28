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
  
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]==a[j])
           {
            int k;
            for( k=j;k<n-1;k++)
            {
                a[k]=a[k+1];
            }
             j--;
             n--;
           }
            
            
        }
       
        
    }

    cout<<"\n Final Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }


}