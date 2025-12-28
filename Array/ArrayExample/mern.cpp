#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of elements in array : ";
    cin>>n;
    int a[n];
       cout<<"enter the array element at : "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_set<int> mySet;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
           
        }
        m++;

    }
    return 0;
}