#include<iostream>
using namespace std;
void arrUnion(int arr1[],int arr2[],int len1,int len2)
{
    int i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++];
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j++];
        }
        else
        {
            cout<<arr2[j++];
            i++;
        }
    }
    while(i<len1)
    {
        cout<<arr1[i++];
    }
    while(j<len2)
    {
        cout<<arr2[j++];
    }
}
int main()
{
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    int len1,len2;
    len1=sizeof(arr1)/sizeof(arr1[0]);
    len2=sizeof(arr2)/sizeof(arr2[0]);
    arrUnion(arr1,arr2,len1,len2);
}
