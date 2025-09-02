#include<iostream>
using namespace std;
int main()
{
    int v;
    cout<<"enter the number of vertex : ";
    cin>>v;

    int infinity;
    cout<<"enter the value to represent infinity distance : ";
    cin>>infinity;

    int d[v][v];
    cout<<"enter the elements of adjacency matrix : ";
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>d[i][j];
        }
    }

    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(d[i][j]>d[i][k]+d[k][j] && d[i][k]!=infinity && d[k][j]!=infinity )
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }

    cout<<"shortest path : "<<endl;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(d[i][j]==infinity)
            {
                cout<<"infinity";
            }else{
                cout<<d[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    
}