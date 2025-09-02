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
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        swap(a[min],a[i]);
    }

    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    

    return 0;
}