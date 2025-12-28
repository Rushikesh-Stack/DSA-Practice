#include<iostream>
using namespace std;

void maximum(int a[], int n)
{
    int max = a[0];  // initialize with first element

    for (int i = 1; i < n; i++)  // start from 1
    {
        if (a[i] > max)
        {
            max = a[i];   // update max
        }
    }

    cout << "Maximum element: " << max << endl;
}

void LinearSearch(int a[], int n)
{
    int key, flag = 0, i = 0;
    cout << "Enter the key to search:\n";
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Element " << key << " is not present in array.\n";
    }
    else
    {
        cout << "Element " << key << " is present at index " << i << ".\n";
    }
}

int main()
{
    int a[100], n;

    cout << "Enter the size of an array:\n";
    cin >> n;

    cout << "Enter the elements:\n";
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

    LinearSearch(a, n);
    maximum(a, n);

    return 0;
}
