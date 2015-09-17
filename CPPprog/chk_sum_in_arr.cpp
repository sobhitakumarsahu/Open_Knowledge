#include <stdio.h>
#define MAX 100000
#include<iostream>
using namespace std;
void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  bool binMap[MAX] = {0}; /*initialize hash map as 0*/

  for(i = 0; i < arr_size; i++)
  {
    temp = sum - arr[i];
    cout<<"TEMP: "<<temp;
    cout<<"binMap[temp]: "<<binMap[temp]<<"\n";
    if(temp >= 0 && binMap[temp] == 1)
    {
      printf("Pair with given sum %d is (%d, %d) \n", sum, arr[i], temp);
    }
    binMap[arr[i]] = 1;
    cout<<"binMap[arr[i]: "<<binMap[arr[i]]<<"\n";
  }
}

/* Driver program to test above function */
int main()
{
    int A[] = {1, 4, 45, 6, 10, 8};
    int n = 16;
    int arr_size = 6;

    printPairs(A, arr_size, n);

    getchar();
    return 0;
}
