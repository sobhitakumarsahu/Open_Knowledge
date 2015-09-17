#include<iostream>
using namespace std;
#define NA -1
void moveToEnd(int arr[],int len)
{
    int i,j=len-1;
    for(i=len-1;i>=0;i--)
    {
        if(arr[i]!=NA)
        {
            arr[j]=arr[i];
            j--;
        }
    }
}
int merge(int arr[],int arr1[],int m,int n)
{
    int i=n;
    int j=0;
    int k=0;
    while(k<(m+n))
    {
        if((i<(m+n)&&arr[i]<=arr1[j])||(j==n))
        {
            arr[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=arr1[j];
            k++;
            j++;
        }
    }
}
void printArray(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
  /* Initialize arrays */
  int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
  int N[] = {5, 7, 9, 25};
  int n = sizeof(N)/sizeof(N[0]);
  int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;

  /*Move the m elements at the end of mPlusN*/
  moveToEnd(mPlusN, m+n);

  /*Merge N[] into mPlusN[] */
  merge(mPlusN, N, m, n);

  /* Print the resultant mPlusN */
  printArray(mPlusN, m+n);

  return 0;
}
