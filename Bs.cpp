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

    int target;
    cout<<"enter the value you want to find : ";
    cin>>target;

    int index=-1;
    int low=0;
    int high=size-1;
    int mid;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(target==a[mid])
        {
            index=mid;
            break;
        }else if(target<a[mid])
        {
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    

    if(index==-1)
    {
        cout<<"Not Found ";
    }else{
        cout<<"Found at index "<<index;
    }


    return 0;
}