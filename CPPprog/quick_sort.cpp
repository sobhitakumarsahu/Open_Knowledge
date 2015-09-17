#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int l,int h) //10, 7, 8, 9, 1, 5 ==> 1,7,8,9,10,5 ==> 1,5,8,9,10,7 ==> 8,9,10,7
{
    int x=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return(i+1);
}
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";

}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
