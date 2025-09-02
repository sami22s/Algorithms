#include<iostream>
using namespace std;

int partitiion (int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(pivot>a[j])
        {
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[high],a[i+1]);
    return i+1;

}

void quick (int a[],int low,int high)
{
   
   if(low<high)
   {
    int p= partitiion (a,low,high);
    quick(a,low,p-1);
    quick(a,p+1,high);
   }
}

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

    quick(a,0,size-1);

    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    

    return 0;
}