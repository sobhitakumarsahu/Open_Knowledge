/*
                    TC                                   SC
    Bubble Sort     O(n^2)
    Sel. Sort       O(n^2)                                O(1)
    Ins sort        O(n^2)(if elem. are sorted in rev. order) otherwise O(n)                                O(1)
*/
#include<iostream>
using namespace std;
void swapElem(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void print_array(int arr[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insSort(int arr[],int n)
{
    int key,i,j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void selSort(int arr[],int n)
{
    int i,j,minidx;
    for(i=0;i<n-1;i++)
    {
        minidx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minidx])
            {
                minidx=j;
            }
        }
        swapElem(&arr[minidx],&arr[i]);
    }
}
void bobbleSort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapElem(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            cout<<"It seems Array is already sorted array!!,TC: O(n)\n";
            break;
        }
    }
}
int main()
{
    int arr[10]={23,11,56,30,66,29,88,10,84,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    insSort(arr,n);
    print_array(arr,n);
    cout<<"\n";
    selSort(arr,n);
    print_array(arr,n);
    cout<<"\n";
    bobbleSort(arr,n);
    print_array(arr,n);
    cout<<"\n";
}
