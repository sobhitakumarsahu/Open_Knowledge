#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int mat2[3][3]={{2,2,2},{2,2,2},{2,2,2}};
    int res[3][3];
    int i,j,k,p=3,q=3,m=3,n=3,sum=0;
    if(n==p)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            res[i][j]=sum;
            sum=0;
        }
    }
    }
    else
        cout<<"Matrix multiplication is not possible!!";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<res[i][j];
        }
        cout<<"\n";
    }
}
