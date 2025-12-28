#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    cout << "Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
}

void bubbleSort(int a[], int n)
{
    int isSorted;

    for (int i = 0; i < n - 1; i++) // For no.of passes
    {
        cout<<"Working on the pass "<<i+1<<endl;
        isSorted=1;
        for (int j = 0; j < n - 1 - i; j++) // For compariosn in each pass
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted=0;
            }
        }
        if(isSorted)
        {
            return;
        }
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
    bubbleSort(a, n);
    cout << "After Sorting:\n";
    printArray(a, n);
}