#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array:\n";
    int n;
    cin>>n;
    int a[10];
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a value:\n";
        cin>>a[i];
    }
    
    cout<<"Elements in Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    int largest=a[0];
    int secondLargest=-1;
    
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            
           secondLargest=largest;
           largest=a[i];
           
        }
        else if(a[i]<largest && a[i]>secondLargest)
        {
            secondLargest=a[i];
        }
        
    }
    
     cout<<"Largest element:"<<largest;
     
     cout<<"Second Largest Element:\t"<<secondLargest<<endl;
    
    
    return 0;
}