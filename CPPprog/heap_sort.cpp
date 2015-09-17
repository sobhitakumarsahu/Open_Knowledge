#include<iostream>
#include<stdlib.h>
using namespace std;
struct maxheap
{
    int n;
    int *arr;
};
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void maxheapify(struct maxheap *maxheap,int idx)
{
    cout<<"IDX : "<<idx<<"\n";
    int largest=idx;
    int left=(idx<<1)+1;
    cout<<"LFT: "<<left<<"\n";
    int right=(idx+1)<<1;
    cout<<"RGH: "<<right<<"\n";
    cout<<"MAXHEAP->n"<<maxheap->n<<"\n";

    if(left<maxheap->n && maxheap->arr[left]>maxheap->arr[largest])
    {
        largest=left;
    }
    if(right<maxheap->n&&maxheap->arr[right]>maxheap->arr[largest])
    {
        largest=right;
    }
    if(largest!=idx)
    {
        swap(&maxheap->arr[largest],&maxheap->arr[idx]);
        maxheapify(maxheap,largest);
    }
}
struct maxheap *createandbuildheap(int *arr,int n)
{
        int i;
        struct maxheap* maxheap=(struct maxheap*)malloc(sizeof(struct maxheap));
        maxheap->n=n;
        maxheap->arr=arr;
        for(i=(maxheap->n-2)/2;i>=0;--i)
        {
            maxheapify(maxheap,i);
        }
        return maxheap;
}
void heapSort(int arr[],int n)
{
    struct maxheap *maxheap=createandbuildheap(arr,n);
    cout<<"max heap size: "<<maxheap->n;
    while(maxheap->n > 1)
    {
        swap(&maxheap->arr[0],&maxheap->arr[maxheap->n-1]);
        --maxheap->n;
        maxheapify(maxheap,0);
    }
}
void printArray(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given array is \n";
    printArray(arr, size);

    heapSort(arr, size);

    cout<<"\nSorted array is \n";
    printArray(arr, size);
    return 0;
}
