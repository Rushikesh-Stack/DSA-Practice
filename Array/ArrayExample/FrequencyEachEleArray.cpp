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

    int count=0;
   int visited[100] = {0};


    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                count++;
                visited[j]=1;
            }
        }
        cout<<"Frequency of"<<a[i]<<"->"<<count<<endl;
        visited[i]=1;
    }

    

}