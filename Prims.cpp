#include<iostream>
using namespace std;
int main ()
{
    int v;
    cout<<"enter the number of vertices : ";
    cin>>v;

    int edges =0;
    int total=0;

    int selected[v];
    for(int i=0;i<v;i++)
    {
        selected [i]=0;
    }
    selected [0]=1;

    int G[v][v];
    cout<<"enter the values of adjacency matrix : ";
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>G[i][j];
        }
    }

    cout<<"individual distance : \n ";
    while (edges < v-1)
    {
        int min = INT_MAX;
        int x=-1;
        int y=-1;

        for(int i=0;i<v;i++)
        {
            if(selected[i])
            {
                for(int j=0;j<v;j++)
                {
                    if(min > G[i][j] && G[i][j] != 0 && !selected[j])
                    {
                        min=G[i][j];
                        x=i;
                        y=j;
                    }
                }
            }
        }

        cout << x << "-" << y << " : " << min << "\n";
        total += min;
        selected[y] = 1;
        edges++;
    }

    cout << "Total weight: " << total << "\n";
    return 0;
}
