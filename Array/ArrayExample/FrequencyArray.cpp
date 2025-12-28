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
        int key;
        cout<<"Enter the element to find out frequency\n";
        cin>>key;

        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                count++;
            }
        }

        if(count==0)
        {
            cout<<"Elements is not present in array:\n";
        }
        else
        {
        cout<<"Frequency of\t"<<key<<"\tis:"<<count<<endl;
        }

    }