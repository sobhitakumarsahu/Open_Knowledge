#include<iostream>
using namespace std;
#include<strings.h>
int main()
{
    char name[10][8],temp[8];
    int i,j,n=5;
    cout<<"Enter 5 names: ";
    for(i=0;i<n;i++)
    {
        cin>>name[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<name[i]<<"\n";
    }
}
