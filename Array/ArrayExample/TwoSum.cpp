#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;

    int a[n];
    cout<<"Enter the elements in array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"Enter the target:\n";
    cin>>target;
    bool found=false;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
               cout << "Indices: " << i << " " << j << endl;
               found = true;
               return 0; 
            }
            
        }
    }
    if(!found)
    cout<<"Indices Not Found\n";

    return

}