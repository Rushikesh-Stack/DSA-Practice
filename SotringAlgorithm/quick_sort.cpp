#include <iostream>
using namespace std;

int partition(int a[], int low, int high); 

void printArray(int a[], int n)
{
    cout << "Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(a, low, high);
        QuickSort(a, low, partitionIndex - 1);
        QuickSort(a, partitionIndex + 1, high);
    }
    cout << "\n";
}

int partition(int a[], int low, int high)
{
    int pivot = a[low]; // consider pivot is my first element
    int i = low + 1;    // go form left -> right
    int j = high;       // go form right to -> left
    int temp;

    do
    {
        while (i <= high && a[i] <= pivot)
        {
            i++; // find the element unitll we get the element less than pivot
        }

        while (a[j] > pivot)
        {
            j--; // find the element unitll we get the element less than pivot
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);

    // swap pivot with with j
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
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
    QuickSort(a, 0, n - 1);
    cout << "After Sorting:\n";
    printArray(a, n);
}