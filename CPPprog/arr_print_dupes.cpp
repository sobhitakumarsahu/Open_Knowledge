#include<iostream>
using namespace std;
#include<stdlib.h>
void arrPrintDupes(int arr[],int len)
{
    int *count=(int *)calloc(sizeof(int),len-2);
    int i;
    for(i=0;i<len;i++)
    {
        if(count[arr[i]]==1)
        {
            cout<<arr[i]<<" ";
        }
        else
            count[arr[i]]++;
    }
}
int main()
{
    int arr[]={4, 2, 4, 5, 2, 3, 1};
    int len=sizeof(arr)/sizeof(arr[0]);
    arrPrintDupes(arr,len);
}
