#include<iostream>
using namespace std;

void m1(int a[],int l,int m,int r)
{
    int b[r-l];
    int x=l,y=m,z=0;

    while(x<m && y<r)
    {
        if(a[x]<a[y])
        {
            b[z++]=a[x++];
        }else{
            b[z++]=a[y++];
        }
    }

    while(x<m)
    {
        b[z++]=a[x++];
    }

    while(y<r)
    {
        b[z++]=a[y++];
    }

    for(int i=0;i<z;i++)
    {
        a[l+i]=b[i];
    }

}

void m2 (int a[],int l,int r)
{
   if((r-l)>1)
   {
    int m=(l+r)/2;
    m2(a,l,m);
    m2(a,m,r);
    m1(a,l,m,r);
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

    m2(a,0,size);

    cout<<"Sorted Array : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    

    return 0;
}