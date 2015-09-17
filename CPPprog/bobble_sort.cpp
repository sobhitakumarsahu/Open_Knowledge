/*Time Complexity: O(n^2)*/
#include<iostream>
using namespace std;
void swapElem(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int n)
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
void print_arr(int arr[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    //int arr[7]={64,34,25,12,22,11,90};
    int arr[7]={11,22,33,44,55,66,77};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_arr(arr,n);
}
