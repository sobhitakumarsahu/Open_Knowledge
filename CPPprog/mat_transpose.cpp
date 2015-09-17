#include<iostream>
using namespace std;
int main()
{
    int mat[2][2]={{1,2},{3,4}};
    int i,j,m=2,n=2;
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
