#include<iostream>
using namespace std;
void arrIntersection(int arr1[],int arr2[],int len1,int len2)
{
    int i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else
        {
            cout<<arr1[i++]<<"\n";
            j++;
        }
    }
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,4};
    int len1,len2;
    len1=sizeof(arr1)/sizeof(arr1[0]);
    len2=sizeof(arr2)/sizeof(arr2[0]);
    arrIntersection(arr1,arr2,len1,len2);
}
