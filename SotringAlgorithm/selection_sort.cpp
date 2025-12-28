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

void SelectionSort(int a[], int n)
{
    int minIndex,j;
    for(int i=0;i<n;i++)
    {
        minIndex=i;
        for( j=i;j<n;j++)//move right side
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
            
        }
        int temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
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
    SelectionSort(a, n);
    cout << "After Sorting:\n";
    printArray(a, n);
}  