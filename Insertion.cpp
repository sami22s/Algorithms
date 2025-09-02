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

    for(int i=1;i<size;i++)
    {
        for(int j=i;j>0 && a[j]<a[j-1];j--)
        {
            swap (a[j],a[j-1]);
        }
    }

    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    

    return 0;
}