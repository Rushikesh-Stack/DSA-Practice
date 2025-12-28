#include<iostream>
using namespace std;


void binarySearch(int a[] ,int &n)
{
    int low=0,high=n-1,mid;
    int flag=0;
    int key;
    cout<<"Enter the key to serach:\n";
    cin>>key;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(key<a[mid])
        {
            high=mid-1; //move left 
        }
        else if(key==a[mid])
        {
            flag=1;
            break;
        }
        else{
            low=mid+1; // move right
        }
    }
    if(flag==1)
    {
        cout<<"Elemet is persent on postion \t"<<mid;
    }
    else{
        cout<<"Element is not present\n";
    }

}


int main()
{
    int a[100], n;

    cout << "Enter the size of an array:\n";
    cin >> n;

    cout << "Enter the elements in sorted manner:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    binarySearch(a,n);

  

    return 0;
}
