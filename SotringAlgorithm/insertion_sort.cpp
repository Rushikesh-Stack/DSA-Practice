#include<iostream>
using namespace std;

void printArray(int a[], int n)
{
    cout << "Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
}

void InsertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
       int key=a[i];
       int j=i-1;
       while(j>=0 && a[j]>key)
       {
          a[j+1]=a[j]; //moving to the left 
          j--;
       }
       a[j+1]=key;

    }
}

int main()
{
    int n;

    cout << "Enter the size of array:\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Before Sorting:\n";
    printArray(a, n);
    InsertionSort(a, n);
    cout << "After Sorting:\n";
    printArray(a, n);
}