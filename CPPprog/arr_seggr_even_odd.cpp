#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void arrSeggr(int arr[],int len)
{
    int i=0,j=len-1;
    while(i<j)
    {
        while(arr[i]%2==0 && i<j)
        {
            i++;
        }
        while(arr[j]%2==1 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[]={12, 34, 45, 9, 8, 90, 3};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    arrSeggr(arr,len);
    int i;
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
