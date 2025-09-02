#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array :";
    cin>>size;

    int a[size];
    cout<<"enter the size for thr array : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    

    return 0;
}